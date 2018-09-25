html:
	markdown README.md > docs/c.html 
	cat docs/header.html docs/c.html docs/footer.html > docs/index.html
