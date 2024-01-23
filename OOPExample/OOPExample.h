#pragma once
#include <string>

/// <summary>
/// <para>
///     Ŭ���� ���� ��� ����
/// </para>
/// <para>
///     ������ ���, ������ ���������� ������� �ʴ� ������ ����
/// </para>
/// <para>
///     �޼��� ���, const ��� �޼��� ���� �� ������
/// </para>
/// <para>
///     private�� ������ �ʵ� ��
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