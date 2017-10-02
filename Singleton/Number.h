#pragma once
#include <string>

class Number
{
protected:
    Number::Number();
    Number::~Number(){}

public:
    static Number* GetInstance();
    static void SetType(std::wstring type);
    int GetValue() const { return m_Value; }
    void SetValue(int val) { m_Value = val; }

protected:
    int m_Value; // TODO: Figure out why this has to be protected and not private member.

private:
    static Number* m_pInstance;
    
    static std::wstring m_Type;    
};