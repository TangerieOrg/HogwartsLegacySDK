#include "ACompletePolyjuiceItemTool.hpp"
#include "AConsumablePotionItemTool.hpp"
ACompletePolyjuiceItemTool* ACompletePolyjuiceItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CompletePolyjuiceItemTool");
    return (ACompletePolyjuiceItemTool*)res;
}
