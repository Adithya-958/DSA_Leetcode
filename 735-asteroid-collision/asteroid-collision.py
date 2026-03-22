class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        # Base case: if list has 0 or 1 asteroid, no collision possible
        if len(asteroids) <= 1:
            return asteroids
        
        # Try to find and resolve first collision
        for i in range(len(asteroids) - 1):
            # Check if collision happens: positive then negative
            if asteroids[i] > 0 and asteroids[i+1] < 0:
                # Case 1: Left asteroid smaller (abs value)
                if abs(asteroids[i]) < abs(asteroids[i+1]):
                    # Remove left asteroid
                    asteroids.pop(i)
                    # Recursively process new list
                    return self.asteroidCollision(asteroids)
                
                # Case 2: Right asteroid smaller (abs value)
                elif abs(asteroids[i]) > abs(asteroids[i+1]):
                    # Remove right asteroid
                    asteroids.pop(i+1)
                    # Recursively process new list
                    return self.asteroidCollision(asteroids)
                
                # Case 3: Both equal (same abs value)
                else:
                    # Remove both asteroids
                    asteroids.pop(i+1)
                    asteroids.pop(i)
                    # Recursively process new list
                    return self.asteroidCollision(asteroids)
        
        # No more collisions possible
        return asteroids