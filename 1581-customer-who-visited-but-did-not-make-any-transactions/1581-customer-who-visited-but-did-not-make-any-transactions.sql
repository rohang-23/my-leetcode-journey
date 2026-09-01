# Write your MySQL query statement below
select customer_id,
       count(customer_id) AS count_no_trans
from Visits v
left join Transactions t
on v.visit_id = t.visit_id
where t.transaction_id is NULL
Group by Customer_id;