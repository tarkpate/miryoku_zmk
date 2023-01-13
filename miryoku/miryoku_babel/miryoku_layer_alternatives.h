// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once


#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI Q,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI M,        \
&lt U_BUTTON W,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &hm RALT SLASH,    &lt U_BUTTON SQT,  \
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&hm LGUI Y,        &hm LALT I,        &hm LCTRL E,       &hm LSHFT A,       &kp DOT,           &kp D,             &hm LSHFT S,       &hm LCTRL T,       &hm LALT N,        &hm LGUI B,        \
&lt U_BUTTON J,    &hm RALT SLASH,    &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &hm RALT P,        &lt U_BUTTON V,    \
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T,       &kp D,             &kp H,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T,       &kp G,             &kp M,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T,       &kp G,             &kp K,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&hm LGUI A,        &hm LALT O,        &hm LCTRL E,       &hm LSHFT U,       &kp I,             &kp D,             &hm LSHFT H,       &hm LCTRL T,       &hm LALT N,        &hm LGUI S,        \
&lt U_BUTTON SLASH,&hm RALT Q,        &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &hm RALT V,        &lt U_BUTTON Z,    \
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&hm LGUI S,        &hm LALT H,        &hm LCTRL N,       &hm LSHFT T,       &kp COMMA,         &kp DOT,           &hm LSHFT A,       &hm LCTRL E,       &hm LALT O,        &hm LGUI I,        \
&lt U_BUTTON F,    &hm RALT M,        &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &hm RALT K,        &lt U_BUTTON Y,    \
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&hm LGUI A,        &hm LALT S,        &hm LCTRL H,       &hm LSHFT T,       &kp G,             &kp Y,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT O,        &hm LGUI I,        \
&lt U_BUTTON Z,    &hm RALT X,        &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI SQT,      \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI SQT,      \
&lt U_BUTTON Y,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
U_NP,              U_NP,              &lt U_FUN BSPC,    &lt U_NUM SPC,     &lt U_SYM RET,     &lt U_MOUSE ESC,   &lt U_NAV E,       &lt U_MEDIA TAB,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI Q,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI M,        \
&kp W,             &hm RALT X,        &kp C,             &kp V,             &lt U_FUN B,       &kp N,             &kp COMMA,         &kp DOT,           &hm RALT SLASH,    &kp SQT,           \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&hm LGUI Y,        &hm LALT I,        &hm LCTRL E,       &hm LSHFT A,       &kp DOT,           &kp D,             &hm LSHFT S,       &hm LCTRL T,       &hm LALT N,        &hm LGUI B,        \
&kp J,             &hm RALT SLASH,    &kp COMMA,         &kp K,             &lt U_FUN SQT,     &kp W,             &kp M,             &kp L,             &hm RALT P,        &kp V,             \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T,       &kp D,             &kp H,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&kp Z,             &hm RALT X,        &kp C,             &kp V,             &lt U_FUN B,       &kp K,             &kp M,             &kp COMMA,         &hm RALT DOT,      &kp SLASH,         \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T,       &kp G,             &kp M,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&kp Z,             &hm RALT X,        &kp C,             &kp D,             &lt U_FUN V,       &kp K,             &kp H,             &kp COMMA,         &hm RALT DOT,      &kp SLASH,         \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T,       &kp G,             &kp K,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&kp Z,             &hm RALT X,        &kp C,             &kp D,             &lt U_FUN V,       &kp M,             &kp H,             &kp COMMA,         &hm RALT DOT,      &kp SLASH,         \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&hm LGUI A,        &hm LALT O,        &hm LCTRL E,       &hm LSHFT U,       &kp I,             &kp D,             &hm LSHFT H,       &hm LCTRL T,       &hm LALT N,        &hm LGUI S,        \
&kp SLASH,         &hm RALT Q,        &kp J,             &kp K,             &lt U_FUN X,       &kp B,             &kp M,             &kp W,             &hm RALT V,        &kp Z,             \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&hm LGUI S,        &hm LALT H,        &hm LCTRL N,       &hm LSHFT T,       &kp COMMA,         &kp DOT,           &hm LSHFT A,       &hm LCTRL E,       &hm LALT O,        &hm LGUI I,        \
&kp F,             &hm RALT M,        &kp V,             &kp C,             &lt U_FUN SLASH,   &kp G,             &kp P,             &kp X,             &hm RALT K,        &kp Y,             \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&hm LGUI A,        &hm LALT S,        &hm LCTRL H,       &hm LSHFT T,       &kp G,             &kp Y,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT O,        &hm LGUI I,        \
&kp Z,             &hm RALT X,        &kp M,             &kp C,             &lt U_FUN V,       &kp K,             &kp L,             &kp COMMA,         &hm RALT DOT,      &kp SLASH,         \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI SQT,      \
&kp Z,             &hm RALT X,        &kp C,             &kp V,             &lt U_FUN B,       &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &kp SLASH,         \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI SQT,      \
&kp Y,             &hm RALT X,        &kp C,             &kp V,             &lt U_FUN B,       &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &kp SLASH,         \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_RSTHP \
U_NU,              &kp C,             &kp Y,             &kp F,             &kp K,             &kp Z,             &kp L,             &kp COMMA,         &kp U,             &kp Q,             \
&hm LGUI R,        &hm LALT S,        &hm LCTRL T,       &hm LSHFT H,       &kp P,             &kp W,             &hm LSHFT N,       &hm LCTRL A,       &hm LALT I,        &hm LGUI O,        \
&kp J,             &hm RALT V,        &kp G,             &kp D,             &lt U_FUN B,       &kp X,             &kp M,             &kp DOT,           &hm RALT DEL,      U_NU,              \
U_NP,              U_NP,              &lt U_MEDIA TAB,   &lt U_NAV E,       &lt U_BNFRD ESC,   &lt U_NSYM RET,    &lt U_PUNC SPC,    &lt U_BRAC BSPC,   U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           &kp D,             &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &kp P,             &kp V,             \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp K,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         &kp DOT,           &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &kp K,             &kp Y,             \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             &kp Y,             &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,           \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             &kp G,             &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           &kp D,             &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           &kp W,             &kp M,             &kp L,             &kp P,             &kp V,             \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp K,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp M,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             &kp SQT,           &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         &kp DOT,           &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         &kp G,             &kp P,             &kp X,             &kp K,             &kp Y,             \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             &kp J,             &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             &kp Y,             &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             &kp K,             &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_RSTHP \
U_NU,              &kp C,             &kp Y,             &kp F,             &kp K,             &kp Z,             &kp L,             &kp COMMA,         &kp U,             &kp Q,             \
&kp R,             &kp S,             &kp T,             &kp H,             &kp P,             &kp W,             &kp N,             &kp A,             &kp I,             &kp O,             \
&kp J,             &kp V,             &kp G,             &kp D,             &kp B,             &kp X,             &kp M,             &kp DOT,           &kp DEL,           U_NU,              \
U_NP,              U_NP,              &kp TAB,           &kp E,             &kp ESC,           &kp RET,           &kp SPC,           &kp BSPC,          U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
&kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &u_bootloader,     \
&kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_NAV,         &to U_NUM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_FLIP \
&kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &u_bootloader,     \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_NAV,         &to U_NUM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp RALT,          &to U_NUM,         &to U_NAV,         U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &to U_NUM,         &to U_NAV,         U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &to U_NUM,         &to U_NAV,         U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &u_bootloader,     \
U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_MOUSE,       &to U_SYM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &u_bootloader,     \
U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &to U_MOUSE,       &to U_SYM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_NU,              U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
U_NA,              &kp RALT,          &to U_SYM,         &to U_MOUSE,       U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              \
U_NA,              &kp RALT,          &to U_SYM,         &to U_MOUSE,       U_NA,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &to U_SYM,         &to U_MOUSE,       U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
U_RGB_HUI,         U_RGB_SAI,         &kp C_VOL_UP,      U_RGB_BRI,         U_RGB_TOG,         U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &u_bootloader,     \
U_RGB_EFF,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &to U_MEDIA,       &to U_FUN,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &u_bootloader,     \
&kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &to U_MEDIA,       &to U_FUN,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RGB_TOG,         U_RGB_EFF,         &kp C_VOL_UP,      U_RGB_HUI,         U_RGB_SAI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_RGB_BRI,         \
U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &u_out_tog,        U_RGB_TOG,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &bt BT_CLR,        &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_bt_sel_4,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQL,           &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp SEMI,          \
U_NA,              &kp RALT,          &to U_NAV,         &to U_NUM,         U_NA,              &kp BSLH,          &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &u_bootloader,     \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          U_NA,              &to U_NUM,         &to U_NAV,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp COLON,         \
U_NA,              &kp RALT,          &to U_MOUSE,       &to U_SYM,         U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &u_bootloader,     \
&kp COLON,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &to U_SYM,         &to U_MOUSE,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NSYM \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              &kp RALT,          &to U_MEDIA,       &to U_FUN,         U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp TAB,           &kp SPC,           &kp K_APP,         U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &u_bootloader,     \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &to U_FUN,         &to U_MEDIA,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPC,           &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

//#define MIRYOKU_ALTERNATIVES_RIGHTY \
//&kp Q,             &kp U,             &kp COMMA,         &kp L,             &lt U_MEDIA Z,     &lt U_FUN K,       &kp F,             &kp Y,             &kp C,             &tog U_RIGHTY,     \
//&hm LGUI O,        &hm LALT I,        &hm LCTRL A,       &hm LSHFT N,       &kp W,             &kp P,             &hm LSHFT H,       &hm LCTRL T,       &hm LALT S,        &hm LGUI R,        \
//&tog U_RIGHTY,     &hm RALT DEL,      &kp DOT,           &kp M,             &kp X,             &kp B,             &kp D,             &kp G,             &hm RALT V,        &kp J,             \
//U_NP,              U_NP,              &kp BSPC,          &kp SPC,           &kp RET,           &kp ESC,           &kp E,             &kp TAB,           U_NP,              U_NP

//#define MIRYOKU_ALTERNATIVES_RNAV \
//

//#define MIRYOKU_ALTERNATIVES_BNFRD \
//&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &kp LPAR,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RPAR,          \
//&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         \
//U_NA,              &kp RALT,          &to U_SYM,         &to U_BNFRD,       U_NA,              &kp MINUS,         &kp NUM_5,         &kp NUM_6,         &kp ASTRK,         &kp SLASH,         \
//U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp SPC,           &kp NUM_0,         &kp DOT,           U_NP,              U_NP

//#define MIRYOKU_ALTERNATIVES_RBNFRD \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp SPC,           &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         U_NU,              \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp NUM_0,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp DOT,           &kp NUM_5,         &kp NUM_6,         U_NU,              U_NU,              \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
//U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

//#define MIRYOKU_ALTERNATIVES_RNSYM \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp CRRT,          &kp DLLR,          U_NU,              U_NU,              &tog U_RIGHTY,     \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp EQL,           &kp PLUS,          &kp MINUS,         &kp SLASH,         &kp ASTRK,         \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp UNDER,         &kp HASH,          &kp PRCT,          U_NU,              &tog U_RIGHTY,     \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NP,              U_NP,              \
//U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

//#define MIRYOKU_ALTERNATIVES_RPUNC \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp COLON,         &kp TILDE,         &kp AT,            &kp GRAVE,         &tog U_RIGHTY,     \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp SEMI,          &kp SQT,           &kp DQT,           &kp EXCL,          &kp QMARK,         \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp PIPE,          &kp BSLH,          &kp AMPS,          &kp PIPE,          &tog U_RIGHTY,     \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NP,              U_NP,              \
//U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

//#define MIRYOKU_ALTERNATIVES_RBRAC \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp RPAR,          &kp RBKT,          &kp GT,            &tog U_RIGHTY,     \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp EQL,           &kp LPAR,          &kp LBKT,          &kp LT,            &kp LBRC,          \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              &kp UNDER,         &kp RPAR,          &kp RBKT,          &kp GT,            &kp RBRC,          \
//U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NP,              U_NP,              \
//U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
