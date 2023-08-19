#include "FMissionLogData.hpp"
#include "UIconButtonWidget.hpp"
#include "UMissionButtonWidget.hpp"
UMissionButtonWidget* UMissionButtonWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionButtonWidget");
    return (UMissionButtonWidget*)res;
}
