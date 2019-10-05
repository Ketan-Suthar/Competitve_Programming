select N, case 
    when P is null then 'Root'
    when N not in (select distinct P from BST where P IS NOT NULL) then 'Leaf'
    else 'Inner'
    end
from BST order by N;