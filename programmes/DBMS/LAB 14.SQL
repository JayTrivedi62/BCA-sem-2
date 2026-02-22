SELECT * FROM STUDENT_DATA;

--Part – A 


--1. Display the Highest, Lowest SPI of all students & label the columns Maximum, Minimum respectively. 
SELECT MAX(SPI) AS MAXIMUM,MIN(SPI) AS MINIMUM FROM STUDENT_DATA;

--2. Find total number of students of student table. 
SELECT COUNT(SNAME) FROM STUDENT_DATA;

--3. Retrieve maximum SPI from BCA department. 
SELECT DEPARTMENT,MAX(SPI) FROM STUDENT_DATA GROUP BY DEPARTMENT HAVING DEPARTMENT='BCA';

--4. Count total number of cities of students without duplication. 
SELECT COUNT(DISTINCT CITY) FROM STUDENT_DATA;

--5. Display city with the total number of students belonging to each city. 
SELECT CITY,COUNT(SNAME) FROM STUDENT_DATA GROUP BY CITY;

--Part – B 


--6. Display city having more than one student. 
SELECT CITY,COUNT(CITY) FROM STUDENT_DATA GROUP BY CITY HAVING COUNT(CITY)>1;

--7. Give total SPI of each department of student table. 
SELECT DEPARTMENT,SUM(SPI) FROM STUDENT_DATA GROUP BY DEPARTMENT ;

--8. Give average SPI of each department of student table without displaying the respective department name. 
SELECT DEPARTMENT,AVG(SPI) FROM STUDENT_DATA GROUP BY DEPARTMENT;

--9. Give minimum SPI of student who belongs to Ahmedabad. 
SELECT MIN(SPI) FROM STUDENT_DATA GROUP BY CITY HAVING CITY='AHMEDABAD';

--10. List the departments having total SPI more than 15. 
SELECT DEPARTMENT,SUM(SPI) FROM STUDENT_DATA GROUP BY DEPARTMENT HAVING SUM(SPI)>15;

--Part – C 


--11. Display department having more than one student. 
SELECT DEPARTMENT ,COUNT(*) FROM STUDENT_DATA GROUP BY DEPARTMENT HAVING COUNT(*) > 1;

--12. Find total number of students from MCA department. 
SELECT DEPARTMENT,COUNT(*) FROM STUDENT_DATA GROUP BY DEPARTMENT HAVING DEPARTMENT='MCA';

--13. Retrieve maximum SPI from BBA department. 
SELECT DEPARTMENT,MAX(SPI) FROM STUDENT_DATA GROUP BY DEPARTMENT HAVING DEPARTMENT='BBA';

--14. Count total number of department of students table without duplication. 
SELECT DEPARTMENT,COUNT(*) FROM STUDENT_DATA GROUP BY DEPARTMENT;

--15. List the departments having total number of students more than one. 
SELECT DEPARTMENT,COUNT(*) FROM STUDENT_DATA GROUP BY DEPARTMENT HAVING COUNT(*) > 1;
