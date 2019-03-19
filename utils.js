export
async function timeout (ms) {
	return new Promise(fulfill => setTimeout(fulfill, ms));
}

export
async function animationFrame () {
	return new Promise(requestAnimationFrame);
}

export
async function event (elem, name, options = { }) {
	return new Promise(fulfill => elem.addEventListener(name, fulfill, {once: true, ...options}));
}

export
async function resumed () {
	if (animating) {
		return;
	} else {
		await event(window, 'click');
		return;
	}
}
var animating = true;
window.addEventListener('click', function () {
	animating = !animating;
});
