# Write your MySQL query statement below
select empuni.unique_id, emp.name FROM Employees AS emp
LEFT JOIN EmployeeUNI as empuni ON emp.id = empuni.id 