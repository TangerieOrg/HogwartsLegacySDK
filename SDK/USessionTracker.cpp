#include "UObject.hpp"
#include "USessionTracker.hpp"
USessionTracker* USessionTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SessionTracker");
    return (USessionTracker*)res;
}
