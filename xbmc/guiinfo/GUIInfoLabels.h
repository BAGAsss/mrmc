#pragma once
/*
*      Copyright (C) 2005-2015 Team XBMC
*      http://xbmc.org
*
*  This Program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 2, or (at your option)
*  any later version.
*
*  This Program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with XBMC; see the file COPYING.  If not, see
*  <http://www.gnu.org/licenses/>.
*
*/

// conditions for window retrieval
#define WINDOW_CONDITION_HAS_LIST_ITEMS  1
#define WINDOW_CONDITION_IS_MEDIA_WINDOW 2

#define PLAYER_HAS_MEDIA              1
#define PLAYER_HAS_AUDIO              2
#define PLAYER_HAS_VIDEO              3
#define PLAYER_PLAYING                4
#define PLAYER_PAUSED                 5
#define PLAYER_REWINDING              6
#define PLAYER_REWINDING_2x           7
#define PLAYER_REWINDING_4x           8
#define PLAYER_REWINDING_8x           9
#define PLAYER_REWINDING_16x         10
#define PLAYER_REWINDING_32x         11
#define PLAYER_FORWARDING            12
#define PLAYER_FORWARDING_2x         13
#define PLAYER_FORWARDING_4x         14
#define PLAYER_FORWARDING_8x         15
#define PLAYER_FORWARDING_16x        16
#define PLAYER_FORWARDING_32x        17
#define PLAYER_CAN_RECORD            18
#define PLAYER_RECORDING             19
#define PLAYER_CACHING               20
#define PLAYER_DISPLAY_AFTER_SEEK    21
#define PLAYER_PROGRESS              22
#define PLAYER_SEEKBAR               23
#define PLAYER_SEEKTIME              24
#define PLAYER_SEEKING               25
#define PLAYER_SHOWTIME              26
#define PLAYER_TIME                  27
#define PLAYER_TIME_REMAINING        28
#define PLAYER_DURATION              29
#define PLAYER_SHOWCODEC             30
#define PLAYER_SHOWINFO              31
#define PLAYER_VOLUME                32
#define PLAYER_MUTED                 33
#define PLAYER_HASDURATION           34
#define PLAYER_CHAPTER               35
#define PLAYER_CHAPTERCOUNT          36
#define PLAYER_TIME_SPEED            37
#define PLAYER_FINISH_TIME           38
#define PLAYER_CACHELEVEL            39
#define PLAYER_STAR_RATING           40
#define PLAYER_CHAPTERNAME           41
#define PLAYER_SUBTITLE_DELAY        42
#define PLAYER_AUDIO_DELAY           43
#define PLAYER_PASSTHROUGH           44
#define PLAYER_PATH                  45
#define PLAYER_FILEPATH              46
#define PLAYER_SEEKOFFSET            47
#define PLAYER_PROGRESS_CACHE        48
#define PLAYER_ITEM_ART              49
#define PLAYER_CAN_PAUSE             50
#define PLAYER_CAN_SEEK              51
#define PLAYER_START_TIME            52
#define PLAYER_TITLE                 53
#define PLAYER_ISINTERNETSTREAM      54
#define PLAYER_FILENAME              55
#define PLAYER_SEEKSTEPSIZE          56
#define PLAYER_IS_CHANNEL_PREVIEW_ACTIVE  57

#define WEATHER_CONDITIONS          100
#define WEATHER_TEMPERATURE         101
#define WEATHER_LOCATION            102
#define WEATHER_IS_FETCHED          103
#define WEATHER_FANART_CODE         104
#define WEATHER_PLUGIN              105

#define SYSTEM_TEMPERATURE_UNITS    106
#define SYSTEM_PROGRESS_BAR         107
#define SYSTEM_LANGUAGE             108
#define SYSTEM_TIME                 110
#define SYSTEM_DATE                 111
#define SYSTEM_CPU_TEMPERATURE      112
#define SYSTEM_GPU_TEMPERATURE      113
#define SYSTEM_FAN_SPEED            114
#define SYSTEM_FREE_SPACE_C         115
// #define SYSTEM_FREE_SPACE_D         116 //116 is reserved for space on D
#define SYSTEM_FREE_SPACE_E         117
#define SYSTEM_FREE_SPACE_F         118
#define SYSTEM_FREE_SPACE_G         119
#define SYSTEM_BUILD_VERSION        120
#define SYSTEM_BUILD_DATE           121
#define SYSTEM_ETHERNET_LINK_ACTIVE 122
#define SYSTEM_FPS                  123
#define SYSTEM_ALWAYS_TRUE          125   // useful for <visible fade="10" start="hidden">true</visible>, to fade in a control
#define SYSTEM_ALWAYS_FALSE         126   // used for <visible fade="10">false</visible>, to fade out a control (ie not particularly useful!)
#define SYSTEM_MEDIA_DVD            127
#define SYSTEM_DVDREADY             128
#define SYSTEM_HAS_ALARM            129
#define SYSTEM_SCREEN_MODE          132
#define SYSTEM_SCREEN_WIDTH         133
#define SYSTEM_SCREEN_HEIGHT        134
#define SYSTEM_CURRENT_WINDOW       135
#define SYSTEM_CURRENT_CONTROL      136
#define SYSTEM_DVD_LABEL            138
#define SYSTEM_HASLOCKS             140
#define SYSTEM_ISMASTER             141
#define SYSTEM_TRAYOPEN             142
#define SYSTEM_SHOW_EXIT_BUTTON     143
#define SYSTEM_ALARM_POS            144
#define SYSTEM_LOGGEDON             145
#define SYSTEM_PROFILENAME          146
#define SYSTEM_PROFILETHUMB         147
#define SYSTEM_HAS_LOGINSCREEN      148
#define SYSTEM_HAS_MODAL_DIALOG     149
#define SYSTEM_HDD_SMART            150
#define SYSTEM_HDD_TEMPERATURE      151
#define SYSTEM_HDD_MODEL            152
#define SYSTEM_HDD_SERIAL           153
#define SYSTEM_HDD_FIRMWARE         154
#define SYSTEM_HDD_PASSWORD         156
#define SYSTEM_HDD_LOCKSTATE        157
#define SYSTEM_HDD_LOCKKEY          158
#define SYSTEM_INTERNET_STATE       159
#define SYSTEM_HAS_INPUT_HIDDEN     160
#define SYSTEM_ALARM_LESS_OR_EQUAL  180
#define SYSTEM_PROFILECOUNT         181
#define SYSTEM_ISFULLSCREEN         182
#define SYSTEM_ISSTANDALONE         183
#define SYSTEM_ISINHIBIT            184
#define SYSTEM_HAS_SHUTDOWN         185
#define SYSTEM_HAS_PVR              186
#define SYSTEM_STARTUP_WINDOW       187
#define SYSTEM_STEREOSCOPIC_MODE    188
#define SYSTEM_BUILD_VERSION_SHORT  189

#define NETWORK_IP_ADDRESS          190
#define NETWORK_MAC_ADDRESS         191
#define NETWORK_IS_DHCP             192
#define NETWORK_LINK_STATE          193
#define NETWORK_SUBNET_MASK         194
#define NETWORK_GATEWAY_ADDRESS     195
#define NETWORK_DNS1_ADDRESS        196
#define NETWORK_DNS2_ADDRESS        197
#define NETWORK_DHCP_ADDRESS        198

#define MUSICPLAYER_TITLE           200
#define MUSICPLAYER_ALBUM           201
#define MUSICPLAYER_ARTIST          202
#define MUSICPLAYER_GENRE           203
#define MUSICPLAYER_YEAR            204
#define MUSICPLAYER_DURATION        205
#define MUSICPLAYER_TRACK_NUMBER    208
#define MUSICPLAYER_COVER           210
#define MUSICPLAYER_BITRATE         211
#define MUSICPLAYER_PLAYLISTLEN     212
#define MUSICPLAYER_PLAYLISTPOS     213
#define MUSICPLAYER_CHANNELS        214
#define MUSICPLAYER_BITSPERSAMPLE   215
#define MUSICPLAYER_SAMPLERATE      216
#define MUSICPLAYER_CODEC           217
#define MUSICPLAYER_DISC_NUMBER     218
#define MUSICPLAYER_RATING          219
#define MUSICPLAYER_COMMENT         220
#define MUSICPLAYER_LYRICS          221
#define MUSICPLAYER_HASPREVIOUS     222
#define MUSICPLAYER_HASNEXT         223
#define MUSICPLAYER_EXISTS          224
#define MUSICPLAYER_PLAYLISTPLAYING 225
#define MUSICPLAYER_ALBUM_ARTIST    226
#define MUSICPLAYER_PLAYCOUNT       227
#define MUSICPLAYER_LASTPLAYED      228
#define MUSICPLAYER_CHANNEL_NAME    229
#define MUSICPLAYER_CHANNEL_NUMBER  230
#define MUSICPLAYER_CHANNEL_GROUP   231
#define MUSICPLAYER_SUB_CHANNEL_NUMBER 232
#define MUSICPLAYER_CHANNEL_NUMBER_LBL 233
#define MUSICPLAYER_CONTENT         234

#define VIDEOPLAYER_TITLE             250
#define VIDEOPLAYER_GENRE             251
#define VIDEOPLAYER_DIRECTOR          252
#define VIDEOPLAYER_YEAR              253
#define VIDEOPLAYER_HASSUBTITLES      254
#define VIDEOPLAYER_SUBTITLESENABLED  255
#define VIDEOPLAYER_COVER             258
#define VIDEOPLAYER_USING_OVERLAYS    259
#define VIDEOPLAYER_ISFULLSCREEN      260
#define VIDEOPLAYER_HASMENU           261
#define VIDEOPLAYER_PLAYLISTLEN       262
#define VIDEOPLAYER_PLAYLISTPOS       263
#define VIDEOPLAYER_EVENT             264
#define VIDEOPLAYER_ORIGINALTITLE     265
#define VIDEOPLAYER_PLOT              266
#define VIDEOPLAYER_PLOT_OUTLINE      267
#define VIDEOPLAYER_EPISODE           268
#define VIDEOPLAYER_SEASON            269
#define VIDEOPLAYER_RATING            270
#define VIDEOPLAYER_TVSHOW            271
#define VIDEOPLAYER_PREMIERED         272
#define VIDEOPLAYER_CONTENT           273
#define VIDEOPLAYER_STUDIO            274
#define VIDEOPLAYER_MPAA              275
#define VIDEOPLAYER_CAST              276
#define VIDEOPLAYER_CAST_AND_ROLE     277
#define VIDEOPLAYER_ARTIST            278
#define VIDEOPLAYER_ALBUM             279
#define VIDEOPLAYER_WRITER            280
#define VIDEOPLAYER_TAGLINE           281
#define VIDEOPLAYER_HAS_INFO          282
#define VIDEOPLAYER_TOP250            283
#define VIDEOPLAYER_RATING_AND_VOTES  284
#define VIDEOPLAYER_TRAILER           285
#define VIDEOPLAYER_VIDEO_CODEC       286
#define VIDEOPLAYER_VIDEO_RESOLUTION  287
#define VIDEOPLAYER_AUDIO_CODEC       288
#define VIDEOPLAYER_AUDIO_CHANNELS    289
#define VIDEOPLAYER_VIDEO_ASPECT      290
#define VIDEOPLAYER_HASTELETEXT       291
#define VIDEOPLAYER_COUNTRY           292
#define VIDEOPLAYER_PLAYCOUNT         293
#define VIDEOPLAYER_LASTPLAYED        294

#define VIDEOPLAYER_STARTTIME         295
#define VIDEOPLAYER_ENDTIME           296
#define VIDEOPLAYER_NEXT_TITLE        297
#define VIDEOPLAYER_NEXT_GENRE        298
#define VIDEOPLAYER_NEXT_PLOT         299
#define VIDEOPLAYER_NEXT_PLOT_OUTLINE 300
#define VIDEOPLAYER_NEXT_STARTTIME    301
#define VIDEOPLAYER_NEXT_ENDTIME      302
#define VIDEOPLAYER_NEXT_DURATION     303
#define VIDEOPLAYER_CHANNEL_NAME      304
#define VIDEOPLAYER_CHANNEL_NUMBER    305
#define VIDEOPLAYER_CHANNEL_GROUP     306
#define VIDEOPLAYER_PARENTAL_RATING   307
#define VIDEOPLAYER_HAS_EPG           308
#define VIDEOPLAYER_VOTES             309
#define VIDEOPLAYER_IS_STEREOSCOPIC   310
#define VIDEOPLAYER_STEREOSCOPIC_MODE 311
#define VIDEOPLAYER_SUBTITLES_LANG    312
#define VIDEOPLAYER_AUDIO_LANG        313
#define VIDEOPLAYER_SUB_CHANNEL_NUMBER 314
#define VIDEOPLAYER_CHANNEL_NUMBER_LBL 315
#define VIDEOPLAYER_CAN_RESUME_LIVE_TV 316
#define VIDEOPLAYER_IMDBNUMBER        317
#define VIDEOPLAYER_EPISODENAME       318
#define VIDEOPLAYER_USER_RATING       319

#define CONTAINER_HAS_PARENT_ITEM    341
#define CONTAINER_CAN_FILTER         342
#define CONTAINER_CAN_FILTERADVANCED 343
#define CONTAINER_FILTERED           344

#define CONTAINER_SCROLL_PREVIOUS   345 // NOTE: These 5 must be kept in this consecutive order
#define CONTAINER_MOVE_PREVIOUS     346
#define CONTAINER_STATIC            347
#define CONTAINER_MOVE_NEXT         348
#define CONTAINER_SCROLL_NEXT       349
#define CONTAINER_ISUPDATING        350
#define CONTAINER_HASFILES          351
#define CONTAINER_HASFOLDERS        352
#define CONTAINER_STACKED           353
#define CONTAINER_FOLDERNAME        354
#define CONTAINER_SCROLLING         355
#define CONTAINER_PLUGINNAME        356
#define CONTAINER_PROPERTY          357
#define CONTAINER_SORT_DIRECTION    358
#define CONTAINER_NUM_ITEMS         359
#define CONTAINER_FOLDERPATH        360
#define CONTAINER_CONTENT           361
#define CONTAINER_HAS_THUMB         362
#define CONTAINER_SORT_METHOD       363
#define CONTAINER_CURRENT_ITEM      364
#define CONTAINER_ART               365
#define CONTAINER_HAS_FOCUS         366
#define CONTAINER_ROW               367
#define CONTAINER_COLUMN            368
#define CONTAINER_POSITION          369
#define CONTAINER_VIEWMODE          370
#define CONTAINER_HAS_NEXT          371
#define CONTAINER_HAS_PREVIOUS      372
#define CONTAINER_SUBITEM           373
#define CONTAINER_NUM_PAGES         374
#define CONTAINER_CURRENT_PAGE      375
#define CONTAINER_SHOWPLOT          376
#define CONTAINER_TOTALTIME         377
#define CONTAINER_SORT_ORDER        378
#define CONTAINER_TOTALWATCHED      379
#define CONTAINER_TOTALUNWATCHED    380
#define MUSICPM_ENABLED             381
#define MUSICPM_SONGSPLAYED         382
#define MUSICPM_MATCHINGSONGS       383
#define MUSICPM_MATCHINGSONGSPICKED 384
#define MUSICPM_MATCHINGSONGSLEFT   385
#define MUSICPM_RELAXEDSONGSPICKED  386
#define MUSICPM_RANDOMSONGSPICKED   387

#define PLAYLIST_LENGTH             390
#define PLAYLIST_POSITION           391
#define PLAYLIST_RANDOM             392
#define PLAYLIST_REPEAT             393
#define PLAYLIST_ISRANDOM           394
#define PLAYLIST_ISREPEAT           395
#define PLAYLIST_ISREPEATONE        396

#define VISUALISATION_LOCKED        400
#define VISUALISATION_PRESET        401
#define VISUALISATION_NAME          402
#define VISUALISATION_ENABLED       403
#define VISUALISATION_HAS_PRESETS   404

#define STRING_IS_EMPTY             410
#define STRING_COMPARE              411
#define STRING_STR                  412
#define INTEGER_GREATER_THAN        413
#define STRING_STR_LEFT             414
#define STRING_STR_RIGHT            415

#define SKIN_BOOL                   600
#define SKIN_STRING                 601
#define SKIN_THEME                  604
#define SKIN_COLOUR_THEME           605
#define SKIN_HAS_THEME              606
#define SKIN_ASPECT_RATIO           607

#define SYSTEM_TOTAL_MEMORY         644
#define SYSTEM_CPU_USAGE            645
#define SYSTEM_USED_MEMORY_PERCENT  646
#define SYSTEM_USED_MEMORY          647
#define SYSTEM_FREE_MEMORY          648
#define SYSTEM_FREE_MEMORY_PERCENT  649
#define SYSTEM_UPTIME               654
#define SYSTEM_TOTALUPTIME          655
#define SYSTEM_CPUFREQUENCY         656
#define SYSTEM_SCREEN_RESOLUTION    659
#define SYSTEM_VIDEO_ENCODER_INFO   660
#define SYSTEM_OS_VERSION_INFO      667
#define SYSTEM_FREE_SPACE           679
#define SYSTEM_USED_SPACE           680
#define SYSTEM_TOTAL_SPACE          681
#define SYSTEM_USED_SPACE_PERCENT   682
#define SYSTEM_FREE_SPACE_PERCENT   683
#define SYSTEM_DVD_TRAY_STATE       700
#define SYSTEM_GET_BOOL             704
#define SYSTEM_GET_CORE_USAGE       705
#define SYSTEM_HAS_CORE_ID          706
#define SYSTEM_RENDER_VENDOR        707
#define SYSTEM_RENDER_RENDERER      708
#define SYSTEM_RENDER_VERSION       709
#define SYSTEM_SETTING              710
#define SYSTEM_HAS_ADDON            711
#define SYSTEM_ADDON_TITLE          712
#define SYSTEM_ADDON_ICON           713
#define SYSTEM_BATTERY_LEVEL        714
#define SYSTEM_IDLE_TIME            715
#define SYSTEM_FRIENDLY_NAME        716
#define SYSTEM_SCREENSAVER_ACTIVE   717
#define SYSTEM_ADDON_VERSION        718
#define SYSTEM_DPMS_ACTIVE          719

#define LIBRARY_HAS_MUSIC           720
#define LIBRARY_HAS_VIDEO           721
#define LIBRARY_HAS_MOVIES          722
#define LIBRARY_HAS_MOVIE_SETS      723
#define LIBRARY_HAS_TVSHOWS         724
#define LIBRARY_HAS_MUSICVIDEOS     725
#define LIBRARY_HAS_SINGLES         726
#define LIBRARY_HAS_COMPILATIONS    727
#define LIBRARY_IS_SCANNING         728
#define LIBRARY_IS_SCANNING_VIDEO   729
#define LIBRARY_IS_SCANNING_MUSIC   730

#define LIBRARY_HASSERVICES         731

#define SYSTEM_PLATFORM_LINUX       741
#define SYSTEM_PLATFORM_WINDOWS     742
#define SYSTEM_PLATFORM_DARWIN      743
#define SYSTEM_PLATFORM_DARWIN_OSX  744
#define SYSTEM_PLATFORM_DARWIN_IOS  745
#define SYSTEM_PLATFORM_DARWIN_TVOS 746
#define SYSTEM_PLATFORM_ANDROID     747
#define SYSTEM_PLATFORM_LINUX_RASPBERRY_PI 748

#define SYSTEM_CAN_POWERDOWN        750
#define SYSTEM_CAN_SUSPEND          751
#define SYSTEM_CAN_HIBERNATE        752
#define SYSTEM_CAN_REBOOT           753

#define SLIDESHOW_ISPAUSED          800
#define SLIDESHOW_ISRANDOM          801
#define SLIDESHOW_ISACTIVE          802
#define SLIDESHOW_ISVIDEO           803

#define SLIDE_INFO_START            900
#define SLIDE_INFO_END              980

#define FANART_COLOR1               1000
#define FANART_COLOR2               1001
#define FANART_COLOR3               1002
#define FANART_IMAGE                1003

#define SYSTEM_PROFILEAUTOLOGIN     1004
#define SYSTEM_HAS_ADSP             1005

#define PVR_CONDITIONS_START        1100
#define PVR_IS_RECORDING            (PVR_CONDITIONS_START)
#define PVR_HAS_TIMER               (PVR_CONDITIONS_START + 1)
#define PVR_HAS_NONRECORDING_TIMER  (PVR_CONDITIONS_START + 2)
#define PVR_HAS_EPG                 (PVR_CONDITIONS_START + 3)
#define PVR_HAS_TXT                 (PVR_CONDITIONS_START + 4)
#define PVR_HAS_DIRECTOR            (PVR_CONDITIONS_START + 5)
#define PVR_IS_PLAYING_TV           (PVR_CONDITIONS_START + 6)
#define PVR_IS_PLAYING_RADIO        (PVR_CONDITIONS_START + 7)
#define PVR_IS_PLAYING_RECORDING    (PVR_CONDITIONS_START + 8)
#define PVR_ACTUAL_STREAM_ENCRYPTED (PVR_CONDITIONS_START + 9)
#define PVR_HAS_TV_CHANNELS         (PVR_CONDITIONS_START + 10)
#define PVR_HAS_RADIO_CHANNELS      (PVR_CONDITIONS_START + 11)
#define PVR_IS_TIMESHIFTING         (PVR_CONDITIONS_START + 12)
#define PVR_CONDITIONS_END          PVR_IS_TIMESHIFTING

#define PVR_STRINGS_START           1200
#define PVR_NEXT_RECORDING_CHANNEL  (PVR_STRINGS_START)
#define PVR_NEXT_RECORDING_CHAN_ICO (PVR_STRINGS_START + 1)
#define PVR_NEXT_RECORDING_DATETIME (PVR_STRINGS_START + 2)
#define PVR_NEXT_RECORDING_TITLE    (PVR_STRINGS_START + 3)
#define PVR_NOW_RECORDING_CHANNEL   (PVR_STRINGS_START + 4)
#define PVR_NOW_RECORDING_CHAN_ICO  (PVR_STRINGS_START + 5)
#define PVR_NOW_RECORDING_DATETIME  (PVR_STRINGS_START + 6)
#define PVR_NOW_RECORDING_TITLE     (PVR_STRINGS_START + 7)
#define PVR_BACKEND_NAME            (PVR_STRINGS_START + 8)
#define PVR_BACKEND_VERSION         (PVR_STRINGS_START + 9)
#define PVR_BACKEND_HOST            (PVR_STRINGS_START + 10)
#define PVR_BACKEND_DISKSPACE       (PVR_STRINGS_START + 11)
#define PVR_BACKEND_CHANNELS        (PVR_STRINGS_START + 12)
#define PVR_BACKEND_TIMERS          (PVR_STRINGS_START + 13)
#define PVR_BACKEND_RECORDINGS      (PVR_STRINGS_START + 14)
#define PVR_BACKEND_DELETED_RECORDINGS (PVR_STRINGS_START + 15)
#define PVR_BACKEND_NUMBER          (PVR_STRINGS_START + 16)
#define PVR_TOTAL_DISKSPACE         (PVR_STRINGS_START + 17)
#define PVR_NEXT_TIMER              (PVR_STRINGS_START + 18)
#define PVR_PLAYING_DURATION        (PVR_STRINGS_START + 19)
#define PVR_PLAYING_TIME            (PVR_STRINGS_START + 20)
#define PVR_PLAYING_PROGRESS        (PVR_STRINGS_START + 21)
#define PVR_ACTUAL_STREAM_CLIENT    (PVR_STRINGS_START + 22)
#define PVR_ACTUAL_STREAM_DEVICE    (PVR_STRINGS_START + 23)
#define PVR_ACTUAL_STREAM_STATUS    (PVR_STRINGS_START + 24)
#define PVR_ACTUAL_STREAM_SIG       (PVR_STRINGS_START + 25)
#define PVR_ACTUAL_STREAM_SNR       (PVR_STRINGS_START + 26)
#define PVR_ACTUAL_STREAM_SIG_PROGR (PVR_STRINGS_START + 27)
#define PVR_ACTUAL_STREAM_SNR_PROGR (PVR_STRINGS_START + 28)
#define PVR_ACTUAL_STREAM_BER       (PVR_STRINGS_START + 29)
#define PVR_ACTUAL_STREAM_UNC       (PVR_STRINGS_START + 30)
#define PVR_ACTUAL_STREAM_VIDEO_BR  (PVR_STRINGS_START + 31)
#define PVR_ACTUAL_STREAM_AUDIO_BR  (PVR_STRINGS_START + 32)
#define PVR_ACTUAL_STREAM_DOLBY_BR  (PVR_STRINGS_START + 33)
#define PVR_ACTUAL_STREAM_CRYPTION  (PVR_STRINGS_START + 34)
#define PVR_ACTUAL_STREAM_SERVICE   (PVR_STRINGS_START + 35)
#define PVR_ACTUAL_STREAM_MUX       (PVR_STRINGS_START + 36)
#define PVR_ACTUAL_STREAM_PROVIDER  (PVR_STRINGS_START + 37)
#define PVR_BACKEND_DISKSPACE_PROGR (PVR_STRINGS_START + 38)
#define PVR_TIMESHIFT_START_TIME    (PVR_STRINGS_START + 39)
#define PVR_TIMESHIFT_END_TIME      (PVR_STRINGS_START + 40)
#define PVR_TIMESHIFT_PLAY_TIME     (PVR_STRINGS_START + 41)
#define PVR_TIMESHIFT_PROGRESS      (PVR_STRINGS_START + 42)
#define PVR_STRINGS_END             PVR_TIMESHIFT_PROGRESS

#define ADSP_CONDITIONS_START       1300
#define ADSP_IS_ACTIVE              (ADSP_CONDITIONS_START)
#define ADSP_HAS_INPUT_RESAMPLE     (ADSP_CONDITIONS_START + 1)
#define ADSP_HAS_PRE_PROCESS        (ADSP_CONDITIONS_START + 2)
#define ADSP_HAS_MASTER_PROCESS     (ADSP_CONDITIONS_START + 3)
#define ADSP_HAS_POST_PROCESS       (ADSP_CONDITIONS_START + 4)
#define ADSP_HAS_OUTPUT_RESAMPLE    (ADSP_CONDITIONS_START + 5)
#define ADSP_MASTER_ACTIVE          (ADSP_CONDITIONS_START + 6)
#define ADSP_CONDITIONS_END         ADSP_MASTER_ACTIVE

#define ADSP_STRINGS_START          1350
#define ADSP_ACTIVE_STREAM_TYPE     (ADSP_STRINGS_START)
#define ADSP_DETECTED_STREAM_TYPE   (ADSP_STRINGS_START + 1)
#define ADSP_MASTER_NAME            (ADSP_STRINGS_START + 7)
#define ADSP_MASTER_INFO            (ADSP_STRINGS_START + 8)
#define ADSP_MASTER_OWN_ICON        (ADSP_STRINGS_START + 9)
#define ADSP_MASTER_OVERRIDE_ICON   (ADSP_STRINGS_START + 10)
#define ADSP_STRINGS_END            ADSP_MASTER_OVERRIDE_ICON

#define RDS_DATA_START              1400
#define RDS_HAS_RDS                 (RDS_DATA_START)
#define RDS_HAS_RADIOTEXT           (RDS_DATA_START + 1)
#define RDS_HAS_RADIOTEXT_PLUS      (RDS_DATA_START + 2)
#define RDS_GET_RADIOTEXT_LINE      (RDS_DATA_START + 3)
#define RDS_TITLE                   (RDS_DATA_START + 4)
#define RDS_BAND                    (RDS_DATA_START + 5)
#define RDS_ARTIST                  (RDS_DATA_START + 6)
#define RDS_COMPOSER                (RDS_DATA_START + 7)
#define RDS_CONDUCTOR               (RDS_DATA_START + 8)
#define RDS_ALBUM                   (RDS_DATA_START + 9)
#define RDS_ALBUM_TRACKNUMBER       (RDS_DATA_START + 10)
#define RDS_GET_RADIO_STYLE         (RDS_DATA_START + 11)
#define RDS_COMMENT                 (RDS_DATA_START + 12)
#define RDS_INFO_NEWS               (RDS_DATA_START + 13)
#define RDS_INFO_NEWS_LOCAL         (RDS_DATA_START + 14)
#define RDS_INFO_STOCK              (RDS_DATA_START + 15)
#define RDS_INFO_STOCK_SIZE         (RDS_DATA_START + 16)
#define RDS_INFO_SPORT              (RDS_DATA_START + 17)
#define RDS_INFO_SPORT_SIZE         (RDS_DATA_START + 18)
#define RDS_INFO_LOTTERY            (RDS_DATA_START + 19)
#define RDS_INFO_LOTTERY_SIZE       (RDS_DATA_START + 20)
#define RDS_INFO_WEATHER            (RDS_DATA_START + 21)
#define RDS_INFO_WEATHER_SIZE       (RDS_DATA_START + 22)
#define RDS_INFO_CINEMA             (RDS_DATA_START + 23)
#define RDS_INFO_CINEMA_SIZE        (RDS_DATA_START + 24)
#define RDS_INFO_HOROSCOPE          (RDS_DATA_START + 25)
#define RDS_INFO_HOROSCOPE_SIZE     (RDS_DATA_START + 26)
#define RDS_INFO_OTHER              (RDS_DATA_START + 27)
#define RDS_INFO_OTHER_SIZE         (RDS_DATA_START + 28)
#define RDS_PROG_STATION            (RDS_DATA_START + 29)
#define RDS_PROG_NOW                (RDS_DATA_START + 30)
#define RDS_PROG_NEXT               (RDS_DATA_START + 31)
#define RDS_PROG_HOST               (RDS_DATA_START + 32)
#define RDS_PROG_EDIT_STAFF         (RDS_DATA_START + 33)
#define RDS_PROG_HOMEPAGE           (RDS_DATA_START + 34)
#define RDS_PROG_STYLE              (RDS_DATA_START + 35)
#define RDS_PHONE_HOTLINE           (RDS_DATA_START + 36)
#define RDS_PHONE_STUDIO            (RDS_DATA_START + 37)
#define RDS_SMS_STUDIO              (RDS_DATA_START + 38)
#define RDS_EMAIL_HOTLINE           (RDS_DATA_START + 39)
#define RDS_EMAIL_STUDIO            (RDS_DATA_START + 40)
#define RDS_HAS_HOTLINE_DATA        (RDS_DATA_START + 41)
#define RDS_HAS_STUDIO_DATA         (RDS_DATA_START + 42)
#define RDS_AUDIO_LANG              (RDS_DATA_START + 43)
#define RDS_CHANNEL_COUNTRY         (RDS_DATA_START + 44)
#define RDS_DATA_END                RDS_CHANNEL_COUNTRY

#define WINDOW_IS_TOPMOST_MODAL     9992
#define WINDOW_PROPERTY             9993
#define WINDOW_IS_TOPMOST           9994
#define WINDOW_IS_VISIBLE           9995
#define WINDOW_NEXT                 9996
#define WINDOW_PREVIOUS             9997
#define WINDOW_IS_MEDIA             9998
#define WINDOW_IS_ACTIVE            9999

#define CONTROL_GET_LABEL           29996
#define CONTROL_IS_ENABLED          29997
#define CONTROL_IS_VISIBLE          29998
#define CONTROL_GROUP_HAS_FOCUS     29999
#define CONTROL_HAS_FOCUS           30000

#define LISTITEM_START              35000
#define LISTITEM_THUMB              (LISTITEM_START)
#define LISTITEM_LABEL              (LISTITEM_START + 1)
#define LISTITEM_TITLE              (LISTITEM_START + 2)
#define LISTITEM_TRACKNUMBER        (LISTITEM_START + 3)
#define LISTITEM_ARTIST             (LISTITEM_START + 4)
#define LISTITEM_ALBUM              (LISTITEM_START + 5)
#define LISTITEM_YEAR               (LISTITEM_START + 6)
#define LISTITEM_GENRE              (LISTITEM_START + 7)
#define LISTITEM_ICON               (LISTITEM_START + 8)
#define LISTITEM_DIRECTOR           (LISTITEM_START + 9)
#define LISTITEM_OVERLAY            (LISTITEM_START + 10)
#define LISTITEM_LABEL2             (LISTITEM_START + 11)
#define LISTITEM_FILENAME           (LISTITEM_START + 12)
#define LISTITEM_DATE               (LISTITEM_START + 13)
#define LISTITEM_SIZE               (LISTITEM_START + 14)
#define LISTITEM_RATING             (LISTITEM_START + 15)
#define LISTITEM_PROGRAM_COUNT      (LISTITEM_START + 16)
#define LISTITEM_DURATION           (LISTITEM_START + 17)
#define LISTITEM_ISPLAYING          (LISTITEM_START + 18)
#define LISTITEM_ISSELECTED         (LISTITEM_START + 19)
#define LISTITEM_PLOT               (LISTITEM_START + 20)
#define LISTITEM_PLOT_OUTLINE       (LISTITEM_START + 21)
#define LISTITEM_EPISODE            (LISTITEM_START + 22)
#define LISTITEM_SEASON             (LISTITEM_START + 23)
#define LISTITEM_TVSHOW             (LISTITEM_START + 24)
#define LISTITEM_PREMIERED          (LISTITEM_START + 25)
#define LISTITEM_COMMENT            (LISTITEM_START + 26)
#define LISTITEM_ACTUAL_ICON        (LISTITEM_START + 27)
#define LISTITEM_PATH               (LISTITEM_START + 28)
#define LISTITEM_PICTURE_PATH       (LISTITEM_START + 29)
// the ordering of LISTITEM_PICTURE_* is important as they're mapped to SLIDE_* items in GUIInfoManager.cpp
#define LISTITEM_PICTURE_START      (LISTITEM_START + 30)
#define LISTITEM_PICTURE_RESOLUTION (LISTITEM_PICTURE_START) // => SLIDE_RESOLUTION
#define LISTITEM_PICTURE_LONGDATE   (LISTITEM_START + 31)    // => SLIDE_EXIF_LONG_DATE
#define LISTITEM_PICTURE_LONGDATETIME (LISTITEM_START + 32)    // => SLIDE_EXIF_LONG_DATE_TIME
#define LISTITEM_PICTURE_DATE       (LISTITEM_START + 33)    // => SLIDE_EXIF_DATE
#define LISTITEM_PICTURE_DATETIME   (LISTITEM_START + 34)    // => SLIDE_EXIF_DATE_TIME
#define LISTITEM_PICTURE_COMMENT    (LISTITEM_START + 35)    // => SLIDE_COMMENT
#define LISTITEM_PICTURE_CAPTION    (LISTITEM_START + 36)    // => SLIDE_IPTC_CAPTION
#define LISTITEM_PICTURE_DESC       (LISTITEM_START + 37)    // => SLIDE_EXIF_DESCRIPTION
#define LISTITEM_PICTURE_KEYWORDS   (LISTITEM_START + 38)    // => SLIDE_IPTC_KEYWORDS
#define LISTITEM_PICTURE_CAM_MAKE   (LISTITEM_START + 39)    // => SLIDE_EXIF_CAMERA_MAKE
#define LISTITEM_PICTURE_CAM_MODEL  (LISTITEM_START + 40)    // => SLIDE_EXIF_CAMERA_MODEL
#define LISTITEM_PICTURE_APERTURE   (LISTITEM_START + 41)    // => SLIDE_EXIF_APERTURE
#define LISTITEM_PICTURE_FOCAL_LEN  (LISTITEM_START + 42)    // => SLIDE_EXIF_FOCAL_LENGTH
#define LISTITEM_PICTURE_FOCUS_DIST (LISTITEM_START + 43)    // => SLIDE_EXIF_FOCUS_DIST
#define LISTITEM_PICTURE_EXP_MODE   (LISTITEM_START + 44)    // => SLIDE_EXIF_EXPOSURE_MODE
#define LISTITEM_PICTURE_EXP_TIME   (LISTITEM_START + 45)    // => SLIDE_EXIF_EXPOSURE_TIME
#define LISTITEM_PICTURE_ISO        (LISTITEM_START + 46)    // => SLIDE_EXIF_ISO_EQUIV
#define LISTITEM_PICTURE_AUTHOR           (LISTITEM_START + 47) // => SLIDE_IPTC_AUTHOR
#define LISTITEM_PICTURE_BYLINE           (LISTITEM_START + 48) // => SLIDE_IPTC_BYLINE
#define LISTITEM_PICTURE_BYLINE_TITLE     (LISTITEM_START + 49) // => SLIDE_IPTC_BYLINE_TITLE
#define LISTITEM_PICTURE_CATEGORY         (LISTITEM_START + 50) // => SLIDE_IPTC_CATEGORY
#define LISTITEM_PICTURE_CCD_WIDTH        (LISTITEM_START + 51) // => SLIDE_EXIF_CCD_WIDTH
#define LISTITEM_PICTURE_CITY             (LISTITEM_START + 52) // => SLIDE_IPTC_CITY
#define LISTITEM_PICTURE_URGENCY          (LISTITEM_START + 53) // => SLIDE_IPTC_URGENCY
#define LISTITEM_PICTURE_COPYRIGHT_NOTICE (LISTITEM_START + 54) // => SLIDE_IPTC_COPYRIGHT_NOTICE
#define LISTITEM_PICTURE_COUNTRY          (LISTITEM_START + 55) // => SLIDE_IPTC_COUNTRY
#define LISTITEM_PICTURE_COUNTRY_CODE     (LISTITEM_START + 56) // => SLIDE_IPTC_COUNTRY_CODE
#define LISTITEM_PICTURE_CREDIT           (LISTITEM_START + 57) // => SLIDE_IPTC_CREDIT
#define LISTITEM_PICTURE_IPTCDATE         (LISTITEM_START + 58) // => SLIDE_IPTC_DATE
#define LISTITEM_PICTURE_DIGITAL_ZOOM     (LISTITEM_START + 59) // => SLIDE_EXIF_DIGITAL_ZOOM
#define LISTITEM_PICTURE_EXPOSURE         (LISTITEM_START + 60) // => SLIDE_EXIF_EXPOSURE
#define LISTITEM_PICTURE_EXPOSURE_BIAS    (LISTITEM_START + 61) // => SLIDE_EXIF_EXPOSURE_BIAS
#define LISTITEM_PICTURE_FLASH_USED       (LISTITEM_START + 62) // => SLIDE_EXIF_FLASH_USED
#define LISTITEM_PICTURE_HEADLINE         (LISTITEM_START + 63) // => SLIDE_IPTC_HEADLINE
#define LISTITEM_PICTURE_COLOUR           (LISTITEM_START + 64) // => SLIDE_COLOUR
#define LISTITEM_PICTURE_LIGHT_SOURCE     (LISTITEM_START + 65) // => SLIDE_EXIF_LIGHT_SOURCE
#define LISTITEM_PICTURE_METERING_MODE    (LISTITEM_START + 66) // => SLIDE_EXIF_METERING_MODE
#define LISTITEM_PICTURE_OBJECT_NAME      (LISTITEM_START + 67) // => SLIDE_IPTC_OBJECT_NAME
#define LISTITEM_PICTURE_ORIENTATION      (LISTITEM_START + 68) // => SLIDE_EXIF_ORIENTATION
#define LISTITEM_PICTURE_PROCESS          (LISTITEM_START + 69) // => SLIDE_PROCESS
#define LISTITEM_PICTURE_REF_SERVICE      (LISTITEM_START + 70) // => SLIDE_IPTC_REF_SERVICE
#define LISTITEM_PICTURE_SOURCE           (LISTITEM_START + 71) // => SLIDE_IPTC_SOURCE
#define LISTITEM_PICTURE_SPEC_INSTR       (LISTITEM_START + 72) // => SLIDE_IPTC_SPEC_INSTR
#define LISTITEM_PICTURE_STATE            (LISTITEM_START + 73) // => SLIDE_IPTC_STATE
#define LISTITEM_PICTURE_SUP_CATEGORIES   (LISTITEM_START + 74) // => SLIDE_IPTC_SUP_CATEGORIES
#define LISTITEM_PICTURE_TX_REFERENCE     (LISTITEM_START + 75) // => SLIDE_IPTC_TX_REFERENCE
#define LISTITEM_PICTURE_WHITE_BALANCE    (LISTITEM_START + 76) // => SLIDE_EXIF_WHITE_BALANCE
#define LISTITEM_PICTURE_IMAGETYPE        (LISTITEM_START + 77) // => SLIDE_IPTC_IMAGETYPE
#define LISTITEM_PICTURE_SUBLOCATION      (LISTITEM_START + 78) // => SLIDE_IPTC_SUBLOCATION
#define LISTITEM_PICTURE_TIMECREATED      (LISTITEM_START + 79) // => SLIDE_IPTC_TIMECREATED
#define LISTITEM_PICTURE_GPS_LAT    (LISTITEM_START + 80)    // => SLIDE_EXIF_GPS_LATITUDE
#define LISTITEM_PICTURE_GPS_LON    (LISTITEM_START + 81)    // => SLIDE_EXIF_GPS_LONGITUDE
#define LISTITEM_PICTURE_GPS_ALT    (LISTITEM_START + 82)    // => SLIDE_EXIF_GPS_ALTITUDE
#define LISTITEM_PICTURE_END        (LISTITEM_PICTURE_GPS_ALT)
#define LISTITEM_STUDIO             (LISTITEM_START + 83)
#define LISTITEM_MPAA               (LISTITEM_START + 84)
#define LISTITEM_CAST               (LISTITEM_START + 85)
#define LISTITEM_CAST_AND_ROLE      (LISTITEM_START + 86)
#define LISTITEM_WRITER             (LISTITEM_START + 87)
#define LISTITEM_TAGLINE            (LISTITEM_START + 88)
#define LISTITEM_TOP250             (LISTITEM_START + 89)
#define LISTITEM_RATING_AND_VOTES   (LISTITEM_START + 90)
#define LISTITEM_TRAILER            (LISTITEM_START + 91)
#define LISTITEM_STAR_RATING        (LISTITEM_START + 92)
#define LISTITEM_FILENAME_AND_PATH  (LISTITEM_START + 93)
#define LISTITEM_SORT_LETTER        (LISTITEM_START + 94)
#define LISTITEM_ALBUM_ARTIST       (LISTITEM_START + 95)
#define LISTITEM_FOLDERNAME         (LISTITEM_START + 96)
#define LISTITEM_VIDEO_CODEC        (LISTITEM_START + 97)
#define LISTITEM_VIDEO_RESOLUTION   (LISTITEM_START + 98)
#define LISTITEM_VIDEO_ASPECT       (LISTITEM_START + 99)
#define LISTITEM_AUDIO_CODEC        (LISTITEM_START + 100)
#define LISTITEM_AUDIO_CHANNELS     (LISTITEM_START + 101)
#define LISTITEM_AUDIO_LANGUAGE     (LISTITEM_START + 102)
#define LISTITEM_SUBTITLE_LANGUAGE  (LISTITEM_START + 103)
#define LISTITEM_IS_FOLDER          (LISTITEM_START + 104)
#define LISTITEM_ORIGINALTITLE      (LISTITEM_START + 105)
#define LISTITEM_COUNTRY            (LISTITEM_START + 106)
#define LISTITEM_PLAYCOUNT          (LISTITEM_START + 107)
#define LISTITEM_LASTPLAYED         (LISTITEM_START + 108)
#define LISTITEM_FOLDERPATH         (LISTITEM_START + 109)
#define LISTITEM_DISC_NUMBER        (LISTITEM_START + 110)
#define LISTITEM_FILE_EXTENSION     (LISTITEM_START + 111)
#define LISTITEM_IS_RESUMABLE       (LISTITEM_START + 112)
#define LISTITEM_PERCENT_PLAYED     (LISTITEM_START + 113)
#define LISTITEM_DATE_ADDED         (LISTITEM_START + 114)
#define LISTITEM_DBTYPE             (LISTITEM_START + 115)
#define LISTITEM_DBID               (LISTITEM_START + 116)

#define LISTITEM_STARTTIME          (LISTITEM_START + 117)
#define LISTITEM_ENDTIME            (LISTITEM_START + 118)
#define LISTITEM_STARTDATE          (LISTITEM_START + 119)
#define LISTITEM_ENDDATE            (LISTITEM_START + 120)
#define LISTITEM_NEXT_TITLE         (LISTITEM_START + 121)
#define LISTITEM_NEXT_GENRE         (LISTITEM_START + 122)
#define LISTITEM_NEXT_PLOT          (LISTITEM_START + 123)
#define LISTITEM_NEXT_PLOT_OUTLINE  (LISTITEM_START + 124)
#define LISTITEM_NEXT_STARTTIME     (LISTITEM_START + 125)
#define LISTITEM_NEXT_ENDTIME       (LISTITEM_START + 126)
#define LISTITEM_NEXT_STARTDATE     (LISTITEM_START + 127)
#define LISTITEM_NEXT_ENDDATE       (LISTITEM_START + 128)
#define LISTITEM_NEXT_DURATION      (LISTITEM_START + 129)
#define LISTITEM_CHANNEL_NAME       (LISTITEM_START + 130)
#define LISTITEM_CHANNEL_NUMBER     (LISTITEM_START + 131)
#define LISTITEM_CHANNEL_GROUP      (LISTITEM_START + 132)
#define LISTITEM_HASTIMER           (LISTITEM_START + 133)
#define LISTITEM_ISRECORDING        (LISTITEM_START + 134)
#define LISTITEM_ISENCRYPTED        (LISTITEM_START + 135)
#define LISTITEM_PARENTALRATING     (LISTITEM_START + 136)
#define LISTITEM_PROGRESS           (LISTITEM_START + 137)
#define LISTITEM_HAS_EPG            (LISTITEM_START + 138)
#define LISTITEM_VOTES              (LISTITEM_START + 139)
#define LISTITEM_STEREOSCOPIC_MODE  (LISTITEM_START + 140)
#define LISTITEM_IS_STEREOSCOPIC    (LISTITEM_START + 141)
#define LISTITEM_INPROGRESS         (LISTITEM_START + 142)
#define LISTITEM_HASRECORDING       (LISTITEM_START + 143)
#define LISTITEM_SUB_CHANNEL_NUMBER (LISTITEM_START + 144)
#define LISTITEM_CHANNEL_NUMBER_LBL (LISTITEM_START + 145)
#define LISTITEM_IMDBNUMBER         (LISTITEM_START + 146)
#define LISTITEM_EPISODENAME        (LISTITEM_START + 147)
#define LISTITEM_IS_COLLECTION      (LISTITEM_START + 148)
#define LISTITEM_HASTIMERSCHEDULE   (LISTITEM_START + 149)
#define LISTITEM_TIMERTYPE          (LISTITEM_START + 150)
#define LISTITEM_EPG_EVENT_TITLE    (LISTITEM_START + 151)
#define LISTITEM_DATETIME           (LISTITEM_START + 152)
#define LISTITEM_USER_RATING        (LISTITEM_START + 153)

#define LISTITEM_PROPERTY_START     (LISTITEM_START + 200)
#define LISTITEM_PROPERTY_END       (LISTITEM_PROPERTY_START + 1000)
#define LISTITEM_END                (LISTITEM_PROPERTY_END)

#define MUSICPLAYER_PROPERTY_OFFSET 800 // 100 id's reserved for musicplayer props.
#define LISTITEM_ART_OFFSET         900 // 100 id's reserved for listitem art.

#define CONDITIONAL_LABEL_START       LISTITEM_END + 1 // 36201
#define CONDITIONAL_LABEL_END         37000

// the multiple information vector
#define MULTI_INFO_START              40000
#define MULTI_INFO_END                99999
#define COMBINED_VALUES_START        100000

// Info Flags
// Stored in the top 8 bits of GUIInfo::m_data1
// therefore we only have room for 8 flags
#define INFOFLAG_LISTITEM_WRAP        ((uint32_t) (1 << 25))  // Wrap ListItem lookups
#define INFOFLAG_LISTITEM_POSITION    ((uint32_t) (1 << 26))  // ListItem lookups based on cursor position
#define INFOFLAG_LISTITEM_ABSOLUTE    ((uint32_t) (1 << 27))  // Absolute ListItem lookups
