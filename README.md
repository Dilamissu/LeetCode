# LeetCode-Note
## Easy
### Two Sum
尋找可以相加成為目標的兩個數字的位置
[100%大佬講解](https://www.code-recipe.com/post/two-sum)

方法:
1. 暴力硬解
  
  省下許多記憶體空間，但同時非常慢
  
2. 使用Hashmap

 先由target減下目前數字確認是否另一半已在map裡，若有，便將兩個index回傳；若無，便匠先在的數字與index放入amp中。
