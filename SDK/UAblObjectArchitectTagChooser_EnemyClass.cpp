#include "UAblObjectArchitectTagChooser.hpp"
#include "UAblObjectArchitectTagChooser_EnemyClass.hpp"
UAblObjectArchitectTagChooser_EnemyClass* UAblObjectArchitectTagChooser_EnemyClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblObjectArchitectTagChooser_EnemyClass");
    return (UAblObjectArchitectTagChooser_EnemyClass*)res;
}
