select p.firstName,p.lastName,a.city,a.State
from Person p
left join Address a
on p.personId = a.personId;
