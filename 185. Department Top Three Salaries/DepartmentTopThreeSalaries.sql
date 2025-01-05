SELECT d.name AS Department,
       e.name AS Employee, 
       e.salary AS Salary
  FROM Employee e JOIN Department d ON (e.departmentID = d.id)
 WHERE e.salary in (
    select distinct salary
      from Employee e2
     WHERE e2.departmentId = d.id
     ORDER BY salary DESC LIMIT 3
 );