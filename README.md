# Template

```cli
git clone https://github.com/VikingInOrbit/GabesEmbededToolBox.git GabesEmbededToolBox/
cd GabesEmbededToolBox
git remote rm origin
```

```cli
pip install pip-tools
pip-compile requirements.in
pip install -r requirements.txt" to get dep
```
## Vision
this is a higher levl librey that can be used in microcontrolers


## Working on
- creating Data frames from sensors to send wia telemetry
- transisining scripts from "GabesPythonToolBox" to embeded
    - Filter
    - Frame handler
    - map
    - seriel RW
    - Debug/log

- arduinio adapter - IO,Seriel,common protocols(i2c,..)
- adapter rules and style guide

## What's Next?
- STM32
