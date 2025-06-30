# Personal Eisenhower Matrix System

A C++/Python productivity application that automates weekly task prioritisation using the Eisenhower Matrix, with NLP-powered task categorisation and longitudinal performance analytics.

## Overview

This system creates weekly Eisenhower matrices for task management, automatically emails reminders and performance metrics, and maintains a personal GitHub repository for long-term productivity analysis.

### Key Features

- **Interactive Matrix Management**: Visual dashboard for task creation, completion, and quadrant organisation
- **Automated Workflows**: Weekly email reminders (Sunday/Monday) and performance summaries (Friday)
- **Intelligent Categorisation**: NLP-powered task classification with adaptive category creation
- **Longitudinal Analytics**: GitHub-archived weekly data for trend analysis and productivity insights
- **Flexible Task Handling**: Automatic urgency escalation for incomplete tasks

## Architecture

**Core Engine (C++)**
- High-performance matrix operations and data structures
- JSON serialisation for cross-language compatibility
- Week-based data organisation with dd-mm-yyyy format

**Application Layer (Python)**
- Interactive dashboard interface
- Email automation and scheduling
- NLP processing for task categorisation
- GitHub API integration for data archival
- Analytics and metrics calculation

## Quick Start

### Prerequisites
- C++17 compatible compiler
- Python 3.8+
- CMake 3.16+
- Git

### Installation
```bash
git clone https://github.com/yourusername/eisenhower-matrix.git
cd eisenhower-matrix
./scripts/install.sh
