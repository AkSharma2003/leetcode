-- Write your PostgreSQL query statement below
SELECT sp.name FROM SalesPerson sp
WHERE sales_id NOT IN (
    SELECT sales_id
    FROM Orders o 
    JOIN Company c ON
    o.com_id = c.com_id
    WHERE c.name= 'RED'
);