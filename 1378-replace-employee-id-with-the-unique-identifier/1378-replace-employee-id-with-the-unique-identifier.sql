# Write your MySQL query statement below
 select unique_id,
        name
from EmployeeUNI e
RIGHT JOIN Employees em
ON e.id = em.id;
