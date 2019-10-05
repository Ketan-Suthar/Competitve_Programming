select country.continent, round(avg(city.population)-0.5) as "avg" from city inner join country 
on country.code = city.countrycode group by country.continent;