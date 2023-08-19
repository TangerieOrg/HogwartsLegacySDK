#include "UFieldGuideButtonBase.hpp"
#include "UFieldGuideButton_Quests.hpp"
UFieldGuideButton_Quests* UFieldGuideButton_Quests::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideButton_Quests");
    return (UFieldGuideButton_Quests*)res;
}
