#include "OOPExample.h"

#include <iostream>

/// <summary>
/// <para>
///     �����ڷ� ȣ���� �� �ְ� �Ķ���ʹ� private ��� ������ �ʱ�ȭ
/// </para>
/// </summary>
/// <param name="name">
///     �����ڿ��� �޴� name �Ķ����
/// </param>
/// <param name="age">
///     �����ڿ��� �޴� age �Ķ����
/// </param>
Person::Person(const std::string& name, int age) : name_(name), age_(age) {}

/// <summary>
/// <para>
///     Person Ŭ�������� ��� ������ PrintInfo �޼���
/// </para>
/// <para>
///     ��� �Լ��� ������� ��Ÿ���� �ش� �ν��Ͻ� ���¸� �������� ������ ����.
///     == Ŭ���� ���� ��� ������ �б� �������θ� ���ȴ�
/// </para>
/// </summary>
void Person::PrintInfo() const {
    std::cout << "Name: " << name_ << ", Age: " << age_ << std::endl;
}

#pragma region ��� �ν��Ͻ� �� �� ��� �ν��Ͻ� �� ���̽�
/// <summary>
/// <para>
///     �ش� �Լ� ������ ��� ������ ������ �� �����ϴ�. ��� ������ ���� ���� ������ ������ �� �����ϴ�.
/// </para>
/// <para>
///     const ��� �Լ��� const ��ü�� ���ؼ��� ȣ��� �� �ֽ��ϴ�. ��, ��ü�� const�� ����Ǿ��� ���� ȣ���� �� �ֽ��ϴ�.
/// </para>
/// <para>
///     const ��� �Լ��� ������� �����ϱ� ������ �����Ϸ��� ������ ������ �� �ֵ��� �����ݴϴ�. �̸� ���� ��ü�� ���°� �ǵ�ġ �ʰ� ������� �ʵ��� ��ȣ�� �� �ֽ��ϴ�.
/// </para>
/// <para>
///     const Person person("Alice", 30);
///     person.PrintInfo(); // ����
/// </para>
/// <para>
///     Person person("Bob", 25);
///     person.PrintInfo(); // ����: ��� ��ü�� ���� ��-��� �Լ� ȣ��
/// </para>
/// </summary>
#pragma endregion
