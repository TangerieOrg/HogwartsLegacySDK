#include "UModFilter_Player_Base.hpp"
#include "UModFilter_Player_IsProtegoActive.hpp"
UModFilter_Player_IsProtegoActive* UModFilter_Player_IsProtegoActive::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Player_IsProtegoActive");
    return (UModFilter_Player_IsProtegoActive*)res;
}
