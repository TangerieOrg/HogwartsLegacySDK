#include "AConsumablePotionItemTool.hpp"
#include "AIncompletePolyjuiceItemTool.hpp"
AIncompletePolyjuiceItemTool* AIncompletePolyjuiceItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IncompletePolyjuiceItemTool");
    return (AIncompletePolyjuiceItemTool*)res;
}
