-- Write your PostgreSQL query statement below
select n.unique_id, e.name from Employees e
left join EmployeeUNI n on n.id=e.id;
