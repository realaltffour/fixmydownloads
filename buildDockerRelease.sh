#!/bin/sh

./clean.sh
docker build --tag fixmydlsbuilder .
docker run -v $(pwd):/fixmydownloads fixmydlsbuilder Release
exit 0
