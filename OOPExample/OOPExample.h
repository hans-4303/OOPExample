#pragma once
#include <string>

/// <summary>
/// <para>
///     클래스 명세한 헤더 파일
/// </para>
/// <para>
///     생성자 명시, 원본은 참조하지만 변경되진 않는 데이터 있음
/// </para>
/// <para>
///     메서드 명시, const 멤버 메서드 여부 및 리턴형
/// </para>
/// <para>
///     private로 관리될 필드 값
/// </para>
/// </summary>
class Person {
public:
    Person(const std::string& name, int age);
    void PrintInfo() const;
private:
    std::string name_;
    int age_;
};