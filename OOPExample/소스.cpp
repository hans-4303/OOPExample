#include "OOPExample.h"

#include <iostream>

/// <summary>
/// <para>
///     생성자로 호출할 수 있고 파라미터는 private 멤버 변수로 초기화
/// </para>
/// </summary>
/// <param name="name">
///     생성자에서 받는 name 파라미터
/// </param>
/// <param name="age">
///     생성자에서 받는 age 파라미터
/// </param>
Person::Person(const std::string& name, int age) : name_(name), age_(age) {}

/// <summary>
/// <para>
///     Person 클래스에서 사용 가능한 PrintInfo 메서드
/// </para>
/// <para>
///     멤버 함수의 상수성을 나타내고 해당 인스턴스 상태를 변경하지 않음을 뜻함.
///     == 클래스 내의 멤버 변수는 읽기 전용으로만 사용된다
/// </para>
/// </summary>
void Person::PrintInfo() const {
    std::cout << "Name: " << name_ << ", Age: " << age_ << std::endl;
}

#pragma region 상수 인스턴스 및 비 상수 인스턴스 비교 케이스
/// <summary>
/// <para>
///     해당 함수 내에서 멤버 변수를 수정할 수 없습니다. 멤버 변수를 읽을 수는 있지만 수정할 수 없습니다.
/// </para>
/// <para>
///     const 멤버 함수는 const 객체에 대해서만 호출될 수 있습니다. 즉, 객체가 const로 선언되었을 때만 호출할 수 있습니다.
/// </para>
/// <para>
///     const 멤버 함수는 상수성을 보장하기 때문에 컴파일러가 오류를 감지할 수 있도록 도와줍니다. 이를 통해 객체의 상태가 의도치 않게 변경되지 않도록 보호할 수 있습니다.
/// </para>
/// <para>
///     const Person person("Alice", 30);
///     person.PrintInfo(); // 가능
/// </para>
/// <para>
///     Person person("Bob", 25);
///     person.PrintInfo(); // 오류: 상수 객체에 대한 비-상수 함수 호출
/// </para>
/// </summary>
#pragma endregion
