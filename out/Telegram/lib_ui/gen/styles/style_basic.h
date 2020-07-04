// WARNING! All changes made in this file will be lost!
// Created from 'basic.style' by 'codegen_style'
//
// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#pragma once

#include "ui/style/style_core.h"

namespace style {
namespace internal {

void init_style_basic(int scale);

} // namespace internal

struct TextPalette {
	style::color linkFg;
	style::color monoFg;
	style::color selectBg;
	style::color selectFg;
	style::color selectLinkFg;
	style::color selectMonoFg;
	style::color selectOverlay;
};

struct TextStyle {
	style::font font;
	style::font linkFont;
	style::font linkFontOver;
	int lineHeight;
};

} // namespace style

namespace st {
extern const int &fsize;
extern const style::font &normalFont;
extern const style::font &semiboldFont;
extern const int &boxFontSize;
extern const style::font &boxTextFont;
extern const int &emojiImgSize;
extern const int &emojiSize;
extern const int &emojiPadding;
extern const int &lineWidth;
extern const style::TextPalette &defaultTextPalette;
extern const style::TextStyle &defaultTextStyle;
extern const style::TextStyle &semiboldTextStyle;
extern const int &shadowToggleDuration;
extern const int &slideDuration;
extern const int &slideShift;
extern const style::icon &slideShadow;
extern const int &slideWrapDuration;
extern const int &fadeWrapDuration;
extern const int &linkCropLimit;
extern const style::font &linkFont;
extern const style::font &linkOverFont;
extern const int &roundRadiusLarge;
extern const int &roundRadiusSmall;
extern const int &dateRadius;
extern const int &buttonRadius;
extern const int &setLittleSkip;
extern const int &noContactsHeight;
extern const style::font &noContactsFont;
extern const style::color &noContactsColor;
extern const int &activeFadeInDuration;
extern const int &activeFadeOutDuration;
extern const int &msgMaxWidth;
extern const style::font &msgFont;
extern const style::font &msgNameFont;
extern const style::TextStyle &msgNameStyle;
extern const style::font &msgServiceFont;
extern const style::font &msgServiceNameFont;
extern const int &msgServicePhotoWidth;
extern const style::font &msgDateFont;
extern const int &msgMinWidth;
extern const int &msgPhotoSize;
extern const int &msgPhotoSkip;
extern const style::margins &msgPadding;
extern const style::margins &msgMargin;
extern const int &msgMarginTopAttached;
extern const int &msgLnkPadding;
extern const int &msgShadow;
extern const style::margins &msgReplyPadding;
extern const style::point &msgReplyBarPos;
extern const style::size &msgReplyBarSize;
extern const int &msgReplyBarSkip;
extern const style::margins &msgServicePadding;
extern const style::margins &msgServiceMargin;
extern const int &msgDateSpace;
extern const style::point &msgDateDelta;
extern const int &msgDateImgDelta;
extern const style::point &msgDateImgPadding;
extern const int &msgDateImgCheckSpace;
extern const style::TextStyle &messageTextStyle;
extern const style::TextStyle &msgDateTextStyle;
extern const style::TextPalette &serviceTextPalette;
extern const style::TextStyle &serviceTextStyle;
extern const style::TextPalette &inTextPalette;
extern const style::TextPalette &inTextPaletteSelected;
extern const style::TextPalette &outTextPalette;
extern const style::TextPalette &outTextPaletteSelected;
extern const style::TextStyle &fwdTextStyle;
extern const style::TextPalette &inFwdTextPalette;
extern const style::TextPalette &outFwdTextPalette;
extern const style::TextPalette &inFwdTextPaletteSelected;
extern const style::TextPalette &outFwdTextPaletteSelected;
extern const style::TextPalette &inReplyTextPalette;
extern const style::TextPalette &inReplyTextPaletteSelected;
extern const style::TextPalette &outReplyTextPalette;
extern const style::TextPalette &outReplyTextPaletteSelected;
extern const style::TextPalette &imgReplyTextPalette;
extern const style::TextPalette &inSemiboldPalette;
extern const style::TextPalette &outSemiboldPalette;
extern const style::TextPalette &historyComposeAreaPalette;
extern const int &mediaCaptionSkip;
extern const int &mediaInBubbleSkip;
extern const int &mediaThumbSize;
extern const int &mediaNameTop;
extern const int &mediaDetailsShift;
extern const int &mediaUnreadSize;
extern const int &mediaUnreadSkip;
extern const int &mediaUnreadTop;
extern const style::TextPalette &mediaInPalette;
extern const style::TextPalette &mediaInPaletteSelected;
extern const style::margins &textRectMargins;
extern const int &searchedBarHeight;
extern const style::font &searchedBarFont;
extern const style::point &searchedBarPosition;
extern const style::icon &smallCloseIcon;
extern const style::icon &smallCloseIconOver;
extern const style::icon &dialogsForwardCancelIcon;
extern const style::font &emojiTextFont;
extern const int &emojiReplaceWidth;
extern const int &emojiReplaceHeight;
extern const int &emojiReplaceInnerHeight;
extern const int &emojiReplacePadding;
extern const style::font &dragFont;
extern const style::font &dragSubfont;
extern const style::color &dragColor;
extern const style::color &dragDropColor;
extern const style::margins &dragMargin;
extern const style::margins &dragPadding;
extern const int &dragHeight;
extern const style::size &radialSize;
extern const int &radialLine;
extern const int &radialDuration;
extern const int &radialPeriod;
extern const style::size &locationSize;
extern const int &mediaPlayerSuppressDuration;
extern const int &botDescSkip;
extern const int &inlineResultsLeft;
extern const int &inlineResultsSkip;
extern const int &inlineMediaHeight;
extern const int &inlineThumbSize;
extern const int &inlineThumbSkip;
extern const style::color &inlineTitleFg;
extern const style::color &inlineDescriptionFg;
extern const int &inlineRowMargin;
extern const int &inlineRowBorder;
extern const style::color &inlineRowBorderFg;
extern const int &inlineRowFileNameTop;
extern const int &inlineRowFileDescriptionTop;
extern const int &inlineResultsMinWidth;
extern const int &inlineDurationMargin;
extern const style::icon &historyReplyCancelIcon;
extern const style::icon &historyReplyCancelIconOver;
extern const style::icon &boxTitleCloseIcon;
extern const style::icon &boxTitleCloseIconOver;
extern const style::icon &notifyFadeRight;
extern const style::icon &stickerIconLeft;
extern const style::icon &stickerIconRight;
extern const style::icon &emojiSuggestionsFadeLeft;
extern const style::icon &emojiSuggestionsFadeRight;
extern const int &transparentPlaceholderSize;
} // namespace st
