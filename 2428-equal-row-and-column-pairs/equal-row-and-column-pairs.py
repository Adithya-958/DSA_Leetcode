class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        n = len(grid)
        # count = 0
        # for i in range(n):
            
        #     for j in range(n):
        #         flag = True
        #         for k in range(n):
        #             if(grid[i][k] != grid[k][j]):
        #                 flag = False
        #                 break
        #         if flag:
        #             count += 1
        # return count
        """
        Count equal row-column pairs using hash map pattern matching
        Strategy: Count row patterns + column patterns → match & multiply
        
        :type grid: List[List[int]] - n×n integer matrix
        :rtype: int - number of equal (row, column) pairs
        """
        
        # 📏 Get matrix dimensions
        rows = len(grid)
        cols = len(grid[0])
        
        # 🗂️ Hash maps to store pattern frequencies
        row_map = {}     # Maps row patterns to their frequencies
        col_map = {}     # Maps column patterns to their frequencies
        
        # 📊 STEP 1: Build row pattern map
        # Iterate through each row and count unique patterns
        for i in range(rows):
            # Convert row to tuple (lists aren't hashable!)
            row_pattern = tuple(grid[i])
            
            # Count frequency of this row pattern
            if row_pattern in row_map:
                row_map[row_pattern] += 1
            else:
                row_map[row_pattern] = 1
        
        # 📈 STEP 2: Build column pattern map  
        # Iterate through each column and count unique patterns
        for col_idx in range(cols):
            # Extract column elements
            temp_col = []
            for row_idx in range(rows):
                temp_col.append(grid[row_idx][col_idx])
            
            # Convert column to tuple for hashing
            col_pattern = tuple(temp_col)
            
            # Count frequency of this column pattern
            if col_pattern in col_map:
                col_map[col_pattern] += 1
            else:
                col_map[col_pattern] = 1
        
        # 🎯 STEP 3: Match patterns and count pairs
        result = 0
        
        # For each unique row pattern
        for pattern in row_map:
            # Check if this pattern exists in columns
            if pattern in col_map:
                # ✨ KEY INSIGHT: Multiply frequencies!
                # If pattern appears in X rows and Y columns,
                # we have X × Y equal pairs!
                result += row_map[pattern] * col_map[pattern]
        
        return result


        