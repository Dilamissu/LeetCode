# LeetCode-Note
## Easy
### 1. Two Sum
尋找可以相加成為目標的兩個數字的位置
[100%大佬講解](https://www.code-recipe.com/post/two-sum)

方法:
1. 暴力硬解
  
  省下許多記憶體空間，但同時非常慢
  
2. 使用Hashmap

 先由target減下目前數字確認是否另一半已在map裡，若有，便將兩個index回傳；若無，便匠先在的數字與index放入amp中。

### 412. Fizz Buzz

方法:
For loops對應cases
  先push_back(to_string(i))再在對應cases更改answer[i]

### 1480. Running Sum of 1d Array

直接以後一個等於本身與前一個相加

### 1672. Richest Customer Wealth

**for(auto &user : accounts) is auto iteration, which is equivalent to: for (auto user = accounts.begin(); user != accounts.end(); user++)**
