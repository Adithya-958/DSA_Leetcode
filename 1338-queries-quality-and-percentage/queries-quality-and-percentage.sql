# Write your MySQL query statement below
select query_name, 
round(sum(Queries.rating/Queries.position)/count(Queries.query_name),2) as quality, 
round
    (sum(
        if(
            (Queries.rating < 3),1,0
            )
        )
    /count(Queries.query_name)*100
    ,2) as poor_query_percentage
from Queries
group by Queries.query_name

-- # Write your MySQL query statement below
-- select query_name, 
-- round(sum((Queries.rating/Queries.position))/count(query_name),2) as quality, 
-- round(sum(if((Queries.rating < 3),1,0))/count(Queries.rating)*100,2) as poor_query_percentage
-- from Queries
-- group by query_name