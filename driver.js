const text = "我買了 2 個蘋果和 5 顆橘子。";

// 將文字中的所有數字乘以 2
const regex = /\d+/g;
const result = text.replace(regex, (match) => {
    return parseInt(match) * 2;
});

console.log(result); // 輸出: "我買了 4 個蘋果和 10 顆橘子。"
