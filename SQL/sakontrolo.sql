SELECT DrugName, Price, DrugCount, ExpDate,
	UPPER(DrugName),
	ROUND(Price, 10),
	SQUARE(DrugCount),
	MONTH(ExpDate)
FROM Drugs

go

SELECT Sqesi,
       AVG(CAST(Asaki AS float)) AS SashualoAsaki
FROM Studenti
GROUP BY Sqesi;
