#include "AConsumablePotionItemTool.hpp"
#include "AEdurusPotionItemTool.hpp"
#include "EObjectTypeQuery.hpp"
#include "FGameplayTag.hpp"
#include "UClass.hpp"
AEdurusPotionItemTool* AEdurusPotionItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EdurusPotionItemTool");
    return (AEdurusPotionItemTool*)res;
}
