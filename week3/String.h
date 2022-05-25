#pragma once

namespace samples
{
    class String
    {
        public:
            String(const char* str); // 생성자
            String(const String& str); //복사 생성자
            ~String();

            void Print();
        private:
            char* mString;
            size_t mSize;
    };
}