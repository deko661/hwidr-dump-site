# HWIDR SDK Viewer

A lightweight web viewer for SDK dumps and memory offsets (Fortnite, Apex Legends, Valorant).

## Features

- Browse names, objects, functions, and offsets
- View SDK headers (classes, structs, enums)
- Copy and export offsets as a C++ header
- API endpoints for programmatic access

## Games supported

- Fortnite
- Apex Legends
- Valorant

## API

Endpoints are exposed under `api/`:

- `api/offsets.json` — memory offsets grouped by namespace
- `api/names.json` — GNames pool
- `api/objects.json` — GObjects dump
- `api/functions.json` — UFunctions grouped by class
- `api/sdk.json` — SDK type index
- `api/sdkContent.json` — full SDK header sources (split in parts)
- `api/apex.json` — Apex Legends dump data

## Discord

Join the community server: https://discord.gg/JFuvZd3vw
