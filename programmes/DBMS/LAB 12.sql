--Part – A 

--1. Write a query to display the current date & time. Label the column Today_Date. 
select getdate() as Today_Date;

--2. Write a query to find new date after 365 day with reference to today. 
select dateadd(day,365,getdate());

--3. Display the current date in a format that appears as may 5 1994 12:00AM. 
select format(getdate(),'MMM d yyyy hh:mm');

--4. Display the current date in a format that appears as 03 Jan 1995. 
select format(getdate(),'dd MMM yyyy');

--5. Display the current date in a format that appears as Jan 04, 96. 
select format(getdate(),'MMM dd, yy');


--Part – B 


--6. Write a query to find out total number of months between 31-Dec-08 and 31-Mar-09. 
select datediff(month,'31-Dec-08','31-Mar-09');

--7. Write a query to find out total number of years between 25-Jan-12 and 14-Sep-10. 
select datediff(year,'14-Sep-10','25-Jan-12');

--8. Write a query to find out total number of hours between 25-Jan-12 7:00 and 26-Jan-12 10:30. 
select datediff(hour,'25-Jan-12 7:00','26-Jan-12 10:30');

--9. Write a query to extract Day, Month, Year from given date 12-May-16. 
select datepart(day,'12-may-16');
select datepart(month,'12-may-16');
select datepart(year,'12-may-16');

--10. Write a query that adds 5 years to current date. 
select dateadd(year,5,getdate());

--Part – C 


--11. Write a query to subtract 2 months from current date. 
select dateadd(month,-2,getdate());

--12. Extract month from current date using datename () and datepart () function. 
select datepart(month,getdate());
select datename(month,getdate());

--13. Write a query to find out last date of current month. 
select eomonth(getdate());

--14. Write a query to display date & time after 30 days from today. 
select dateadd(day,30,getdate());

--15. Calculate your age in years and months.
select datediff(year,'06-feb-2008',GETDATE()),datediff(month,'06-feb-2008',getdate());
