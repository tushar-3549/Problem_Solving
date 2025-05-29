WITH cte AS (
  SELECT COUNT(tweet_id) AS tweet_cnt_per_user, user_id 
  FROM tweets
  WHERE tweet_date BETWEEN '2022-01-01' AND '2022-12-31'
  GROUP BY user_id
)

SELECT tweet_cnt_per_user, COUNT(user_id) AS users_num
FROM cte 
GROUP BY tweet_cnt_per_user
ORDER BY tweet_cnt_per_user;
