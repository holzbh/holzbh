### Basics

- Jasmine Plum
- she/her
- My "go-to" tools: C, C++, Python, PHP, Javascript, MySQL/Postgres
- Also have worked with: C#/Office interop, Docker, XML, Bash shell scripting
- Interested in learning: Golang, Rust

### Background and Interest
My background is in computer networking and web design, but I've been teaching at [Rensselaer Polytechnic Institute (RPI)](https://www.cs.rpi.edu/~holzbh/) for the last 6.5 years and counting. I want to get back into industry as a software developer (see Cisco and Submitty below for examples), because I enjoy the challenges and feeling of contribution. Particularly of interest is industry that is focused on modern networking / internet services.

### Submitty
Submitty is a web-service that is used actively at RPI for many courses, requiring high uptime. Students use it to read discussion forum posts, view grades, and submit assignments (manually and/or autograded). Instructors use it to deliver course materials and grades, and to perform autograding. Graders (such as graduate TAs) use it to enter lab grades and view student submissions (including relevant autograding) and leave both numeric and text feedback. I have served in all roles, but also formally as a developer. 

One of my largest pieces of work, which was finished by another developer was an interface for instructors to configure automatic grade generation without needing to know technical details of the underlying JSON configuration, `customization.json`: [PR 4010](https://github.com/Submitty/Submitty/pull/4010)

You can also see my commits across the organization's various repositories:
- [Submitty](https://github.com/Submitty/Submitty/commits?author=holzbh), the main repository that contains our web app (PHP/Postgres) and some supporting templates/scripts (JS, Twig, Python)
- [RainbowGrades](https://github.com/Submitty/RainbowGrades/commits?author=holzbh), our C++-based gradebook and exam seating tool
- [InstructorTools](https://github.com/Submitty/InstructorTools/pulls?q=is%3Apr+is%3Aclosed+author%3Aholzbh), additional tools to support administering exams and scraping student data such as photos
- [Documentation](https://github.com/Submitty/submitty.github.io/commits/main?author=holzbh), we host a separate [site](https://submitty.org/index/overview) which contains documentation on a lot of the features

### Network Experience
- Cisco Systems, 2008 internship
  - Router OS code (Cisco IOS) in C
  - Bug reproduction, fixes, and testing including configuring mid-range routers in a lab.
  - Internal ticketing system, peer review queue, unit testing
- Master's Research
  - Loss-Tolerant TCP (LT-TCP) implementation in the Linux kernel, 2.6.x
  - Started from code by Brian Molnar, pair programming with Nico Sayavedra
  - OS-level C code in the `net` sub-system, Linux kernel building, testing
  - MIT (Lincoln Labs) Case No. 14865 approved for GPL distribution
  - See: [Slides](https://www.ietf.org/proceedings/88/slides/slides-88-nwcrg-4.pdf) | [MILCOM 2012 Proceedings](http://ieeexplore.ieee.org/document/6415694)

### Jellyneo
[Jellyneo (JN)](https://www.jellyneo.net/) is a fansite for content related to Neopets. We used a homegrown CMS to handle tickets and to manage news/article content as well as a variety of searchable data. My primary responsibilities were feature development DB design (MySQL), PHP code for new hubs, JS/PHP infrastructure to support Flash-driven events that we used to run (now removed since Flash is deprecated), and integrate scraped/third party data. I was creative lead on an unrelated event at JN, "Soda Wars", project manager on several years of Negg Hunt events, and assisted in miscellaneous tasks such as comment moderation.

#### JN Systems I did significant work in:
- [Book of Ages](https://bookofages.jellyneo.net/)
  - Layout (not assets), search engine
- [In-Depth Battlepedia](https://battlepedia.jellyneo.net/)
  - Migration of __"Neopets Battlepedia" a.k.a. IDB__'s database export when they shut down
  - Database design, search engine design
  - Front-end display and information layout
  - CMS-side staff interface for viewing and updating item information, including identifying stale data
- [Wardrobe](https://wardrobe.jellyneo.net/) 
  - Initial scraping of public data from Neopets pet display engine
  - Database design and storage
  - Data persistence, ability to save/load outfits
  - Infrastructure to communicate with our [Dress a Pet](https://wardrobe.jellyneo.net/app/) Flash implementation
- [Dr. Sloth's Neopets Images Emporium](https://www.drsloth.com/)
- [Trophy Cabinets](https://www.jellyneo.net/?go=account_trophies&u=kataklysmos)
  - Designed from scratch, including backend and support for themes
  - Link leads to my trophy cabinet, displaying non-default theme and mix of staff and user trophies

_n.b._ There's a common confusion that this means I worked __for__ Neopets/Nickoledon Virtual World Group, which is incorrect. We did visit their office in Glendale, CA a couple times and were one of the first externally endorsed sites, but JN is an independent entity.

### Teaching
See the [teaching_portfolio](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio) subdirectory for examples of assignments, lectures, and autograding. My full list of courses taught (often with a schedule of topics or syllabus) is on my [RPI personal page](https://www.cs.rpi.edu/~holzbh/).
