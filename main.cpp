#include <cstdio>
#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <limits> // Required header

#include <emscripten/bind.h>
using namespace emscripten;

int get_buffer_length(std::string buffer) {
    // 假設我們要將所有 "X" 依序替換。
    // 注意：我們的替換值裡面故意包含了 "X" 本身（例如 "X-One"）
    std::string text = "%";
    std::regex pattern("%");
    
    size_t index = 0;

    std::string result = "";
    std::string current = text; // 用來消耗的臨時字串
    std::smatch match;

    // 每次只在剩下的字串中尋找「第一個」匹配
    while (std::regex_search(current, match, pattern)) {
        // 1. 將匹配位置之前的文字複製到結果中
        result += match.prefix().str();
        
        //  is %d
        // 2. 放入新的替換值（即使這個值含有 'X'，它也只會待在 result 裡，不會被再次搜尋）
        if (index < replacements.size()) {
            if (match.str() == "%d")
            {
                int max_val = std::numeric_limits<int>::max();
                int min_val = std::numeric_limits<int>::min();
                result += 
            } else if (match.str() == "%s")
            {
                
                // TODO: needs specified length
            }
            
            
        } else {
            result += match.str(); // 沒替換值了就保持原樣
        }
        
        // 3. 關鍵：把已經處理過的部分（包括剛才匹配到的 X）從 current 中「切掉」
        current = match.suffix().str();
    }

    // 4. 最後把剩下沒有匹配到的尾巴接上去
    result += current;
    return std::snprintf(NULL, 0, result.c_str());
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("get_buffer_length", &get_buffer_length);
}






