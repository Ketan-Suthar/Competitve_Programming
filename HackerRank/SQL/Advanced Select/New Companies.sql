/*
ompany_code, founder name, total number of lead managers, total number of senior managers, total number of managers, and total number of employees. Order your output by ascending company_code.
*/
select company_code, founder,
    (select count(distinct lead_manager_code) from Lead_Manager as lm where lm.company_code = c.company_code),
    (select count(distinct senior_manager_code) from Senior_Manager as sm where sm.company_code = c.company_code),
    (select count(distinct manager_code) from Manager as m where m.company_code = c.company_code),
    (select count(distinct employee_code) from Employee as e where e.company_code = c.company_code)
from company as c order by company_code;