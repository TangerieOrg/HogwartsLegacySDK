#include "UFXUpdate.hpp"
#include "UFXUpdate_TranslucencySortPriority.hpp"
UFXUpdate_TranslucencySortPriority* UFXUpdate_TranslucencySortPriority::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_TranslucencySortPriority");
    return (UFXUpdate_TranslucencySortPriority*)res;
}
