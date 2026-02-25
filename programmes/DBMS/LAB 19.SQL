

CREATE TABLE DU_Students (
    StuID INT PRIMARY KEY,
    Name VARCHAR(20),
    EnrollmentNo VARCHAR(12),
    Division VARCHAR(10),
    Sem INT,
    Email VARCHAR(100),
    ContactNo VARCHAR(10)
);


INSERT INTO DU_Students
(StuID, Name, EnrollmentNo, Division, Sem, Email, ContactNo)
VALUES
(101, 'Naimish Patel', '90200107051', 'BCX-3', 3,  'naimishp49@gmail.com', '8866205253'),

(102, 'Firoz A. S.', '90200107090', 'BCY-3', 3,  'firoz.me@yahoo.com', '8885999922'),

(103, 'Krunal Vyas', '90243107101', 'BCZ-5', 5,  'krunal.vyas@gmail.com', '9990888877'),

(104, 'Vijay Patel', '90200107102', 'BCX-5', 5,  'vijay.patel123@gmail.com', '8787878787'),

(105, 'Vimal Trivedi', '90200107103', 'BCY-3', 3,  'vimal123@yahoo.com', '8789564512');

SELECT * FROM DU_STUDENTS;
TRUNCATE TABLE DU_STUDENTS;
    
--Perform the following queries on the above-given table: 



--1.Display all the records of DU_Students table. 
SELECT * FROM DU_STUDENTS;

--2.Display students studying in BCY-3. 
SELECT * FROM DU_Students WHERE DIVISION='BCY-3';

--3.Display 5th semester students. 
SELECT * FROM DU_Students WHERE SEM=5;

--4.Display contact number of all students. 
SELECT CONTACTNO FROM DU_Students;

--5.Display name and division of all students. 
SELECT NAME,DIVISION FROM DU_Students;

--6.Extract last 3 digits of ContactNo.
SELECT SUBSTRING(CONTACTNO,8,10) FROM DU_Students;

--7.Display students sorted by Name in ascending order. 
SELECT NAME FROM DU_Students ORDER BY NAME ASC ;

--8.Display Name of Student who belongs to either Semester 3 or 5. (Use IN & OR)  
SELECT NAME FROM DU_Students WHERE SEM IN (3) OR SEM IN (5);

--9.Find Student Name & Enrollment No in which Student Id between 103 to 105. 
SELECT NAME,ENROLLMENTNO FROM DU_Students WHERE STUID BETWEEN 103 AND 105;

--10. Find Student Name & Enrollment No with their Email Who belongs to 5th Semester. 
SELECT NAME,ENROLLMENTNO,EMAIL FROM DU_Students WHERE SEM=5;

--11. Display All the Details of first three students. 
SELECT TOP 3 NAME,ENROLLMENTNO,EMAIL FROM DU_Students;

--12. Display length of each student name. 
SELECT LEN(NAME) FROM DU_Students;

--13. Update semester to 5 and Contact number to 98984477 whose id is 101. 
UPDATE DU_Students SET SEM=5 , CONTACTNO=98984477 WHERE STUID=101;

--14. Display Name & Enrollment no of first 30% Students. 
SELECT TOP 30 PERCENT NAME,ENROLLMENTNO FROM DU_Students;

--15. Display current date with student name. 
SELECT NAME,GETDATE() FROM DU_Students;

--16. Display Unique Semesters. 
SELECT DISTINCT SEM FROM DU_Students;

--17. Display semester 5 student’s division and Enrollment No. 
SELECT DIVISION,ENROLLMENTNO FROM DU_Students WHERE SEM=5;

--18. Retrieve All the Students who have no Enrollment No. 
SELECT NAME FROM DU_Students WHERE ENROLLMENTNO IS NULL;

--19. Display students whose email ends with 'gmail.com'. 
SELECT NAME FROM DU_Students WHERE EMAIL LIKE '%GMAIL.COM';

--20. Find Students who born after date 01-01-1990. 
SELECT NAME FROM DU_Students WHERE 

--21. Modify ContactNo data type to VARCHAR(15). 
ALTER TABLE DU_STUDENTS ALTER COLUMN CONTACTNO VARCHAR(15);

--22. Display students whose name contains 'Patel'. 
SELECT NAME FROM DU_Students WHERE NAME LIKE '%PATEL%';

--23. Display student name in uppercase. 
SELECT UPPER(NAME) FROM DU_Students;

--24. Rename column Name to StudentName 
EXEC SP_RENAME 'DU_STUDENTS.NAME' , 'STUDENTNAME','COLUMN';

--25. Update Division BCX-3 to BCX-4.  
UPDATE DU_Students SET DIVISION='BCX-4' WHERE DIVISION='BCX-3';

--26. Update Division to BCX-5 & Semester to 5 whose Student Id Is 102. 
UPDATE DU_Students SET DIVISION='BCX-5',SEM=5 WHERE STUID=102;

--27. Add one more Column City Varchar (50) in DU_Students table. 
ALTER TABLE DU_STUDENTS ADD CITY VARCHAR(50);

--28. Remove All BCX-4 Division Students. 
DELETE FROM DU_Students WHERE DIVISION='BCX-4';

--29. Truncate the table (removes all data). 
TRUNCATE TABLE DU_STUDENTS;

--30. Remove table DU_Students from the database.
DROP TABLE DU_STUDENTS;
