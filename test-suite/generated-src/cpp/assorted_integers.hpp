// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from inttypes.djinni

#pragma once

#include <cstdint>
#include <experimental/optional>
#include <utility>

struct AssortedIntegers final {

    int8_t eight;

    int16_t sixteen;

    int32_t thirtytwo;

    int64_t sixtyfour;

    std::experimental::optional<int8_t> o_eight;

    std::experimental::optional<int16_t> o_sixteen;

    std::experimental::optional<int32_t> o_thirtytwo;

    std::experimental::optional<int64_t> o_sixtyfour;

    bool operator==(const AssortedIntegers & other) const;
    bool operator!=(const AssortedIntegers & other) const;

    AssortedIntegers(
            int8_t eight,
            int16_t sixteen,
            int32_t thirtytwo,
            int64_t sixtyfour,
            std::experimental::optional<int8_t> o_eight,
            std::experimental::optional<int16_t> o_sixteen,
            std::experimental::optional<int32_t> o_thirtytwo,
            std::experimental::optional<int64_t> o_sixtyfour) :
                eight(std::move(eight)),
                sixteen(std::move(sixteen)),
                thirtytwo(std::move(thirtytwo)),
                sixtyfour(std::move(sixtyfour)),
                o_eight(std::move(o_eight)),
                o_sixteen(std::move(o_sixteen)),
                o_thirtytwo(std::move(o_thirtytwo)),
                o_sixtyfour(std::move(o_sixtyfour)) {
    }
};