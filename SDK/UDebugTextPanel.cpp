#include "FMapDebugPane.hpp"
#include "UClass.hpp"
#include "UDebugTextPanel.hpp"
#include "UObject.hpp"
#include "UUserWidget.hpp"
UDebugTextPanel* UDebugTextPanel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DebugTextPanel");
    return (UDebugTextPanel*)res;
}
