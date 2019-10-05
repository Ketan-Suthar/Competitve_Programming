SELECT CASE 
	WHEN G.Grade<8 
		THEN NULL 
	ELSE 
		S.Name 
	END AS Name, G.Grade, S.Marks FROM Students S 
INNER JOIN Grades G ON S.Marks BETWEEN G.Min_Mark and G.Max_Mark ORDER BY G.Grade DESC,Name,Marks