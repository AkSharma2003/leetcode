-- Write your PostgreSQL query statement below
select b.name from Employee a
inner join Employee b on a.managerId=b.id
group by b.id, b.name 
having count(*)>=5;