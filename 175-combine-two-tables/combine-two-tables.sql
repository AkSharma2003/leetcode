-- Write your PostgreSQL query statement below
select p.firstName, p.lastName, e.city, e.state from Address e
right join Person p on e.personId=p.personId;