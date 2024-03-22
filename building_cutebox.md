follow directions on gp2040-ce website.


in build directory, instead of `cmake ..` and `make`, run these commands:

`PICO_BOARD=solderparty_rp2040_stamp PICO_SDK_PATH=~/projects/pico-sdk GP2040_BOARDCONFIG=cutebox cmake ..`

`PICO_BOARD=solderparty_rp2040_stamp PICO_SDK_PATH=~/projects/pico-sdk GP2040_BOARDCONFIG=cutebox make`

