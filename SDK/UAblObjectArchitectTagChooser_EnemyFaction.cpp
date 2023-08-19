#include "UAblObjectArchitectTagChooser.hpp"
#include "UAblObjectArchitectTagChooser_EnemyFaction.hpp"
UAblObjectArchitectTagChooser_EnemyFaction* UAblObjectArchitectTagChooser_EnemyFaction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblObjectArchitectTagChooser_EnemyFaction");
    return (UAblObjectArchitectTagChooser_EnemyFaction*)res;
}
