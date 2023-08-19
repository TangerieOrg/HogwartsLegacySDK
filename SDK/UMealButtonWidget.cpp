#include "UMealButtonWidget.hpp"
#include "UUserWidget.hpp"
UMealButtonWidget* UMealButtonWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MealButtonWidget");
    return (UMealButtonWidget*)res;
}
